#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int main()
{
    char ans[11];//存放正解
    int id[8];//存放8位學生的學號
    char idr[8][11];//存放對應學生的回答


    printf("輸入正確解答: ");
    gets(ans);

    printf("輸入每個學生學號與填答答案: \n");
    for(int i = 0; i < 8 ; i++){//依序輸入十位學生的資料
        //printf("第%d次", i);
        //scanf("%d %s", &id[i], idr[i]);//先取得學生學號, 再取得該學生的問卷回答
        scanf("%d", &id[i]);

        scanf("%s", idr[i]);
        //printf("%s",idr[i]);
    }


    //計算每位同學的答對題數
    int correct[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int BEST = 0;//找出最佳題數

    for(int i = 0; i < 8; i++){//8位同學
        for(int j = 0; j < 10; j++){//10題回答
            if(idr[i][j] == ans[j]){
                //printf("1");
                correct[i]++;
            }
        }
        //printf("\n");
        if(correct[i] >= BEST){
            BEST = correct[i];
        }
    }

    //計算出排位等級
    char level[8];
    for(int i = 0; i < 8; i++){
        int cs= correct[i];

        if(cs >= (BEST - 1)){
            level[i] = 'A';
        }
        else if(cs == (BEST - 2) || cs == (BEST - 3)){
            level[i] = 'C';
        }else{
            level[i] = 'F';
        }
    }

    printf("輸出: \n");
    printf("正確答案為: %s\n", ans);
    printf("學號         答案        答對題數    等級\n");
    printf("-------------------------------------------\n");
    for(int i = 0; i < 8; i++){
        //printf("%d      %s\n", id[i], idr[i]);
        printf("%d      %s", id[i], idr[i]);
        printf("%10d%10c\n", correct[i], level[i]);
    }
    return 0;
}
