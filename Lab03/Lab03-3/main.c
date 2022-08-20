#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], b[10];
    int cota = 0, cotb = 0;

    int i=0;
    char x;

    //將兩個陣列輸入
    printf("請輸入陣列A: ");
    do{
        scanf("%d", &a[i]);
        i++;
        cota = i;
    }while(x = getchar() != '\n');

    x = '0';
    i = 0;
    printf("請輸入陣列B: ");
    do{
        scanf("%d", &b[i]);
        i++;
        cotb = i;
    }while(x = getchar() != '\n');

    //展示
    /*for(int i = 0; i < cota; i++){
        printf("%4d", a[i]);
    }printf("\n");
    for(int i = 0; i < cotb; i++){
        printf("%4d", b[i]);
    }printf("\n");*/

    int choose;
    int ans[20];//最後的答案矩陣
    int bns[20];
    int sum = (cota + cotb);//先前a和b的矩陣加入答案矩陣的總數
    //將A和B放進ANS
    for(i = 0; i < cota; i++){
        ans[i] = a[i];
    }
    for(int j = 0; i < sum && j < cotb ; i++, j++){
        ans[i] = b[j];
    }
    //display
    /*for(i = 0; i < sum; i++){
        printf("%4d", ans[i]);
    }printf("\n");*/

    //進行由大到小的氣泡排序法
    for(int i = 0; i < sum - 1; i++){

        for(int j = i + 1; j < sum; j++){

            int temp = 0;
            if(ans[i] < ans[j]){
                temp = ans[i];
                ans[i] = ans[j];
                ans[j] = temp;
            }
        }
    }


    for(int i = 0; i < sum; i ++){
        bns[i] = ans[sum - i - 1];
    }

    printf("1: 由小到大進行排序, 2: 由大到小進行排序");scanf("%d", &choose);
    if(choose == 1){//列印由大到小
        for(i = 0; i < sum; i++){
            printf("%4d", bns[i]);
        }printf("\n");
    }else{//列印由大到小
        for(i = 0; i < sum; i++){
           printf("%4d", ans[i]);
        }printf("\n");
    }
    return 0;
}


