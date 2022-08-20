#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];
    printf("Input 5 integers: \n");
    for(int i = 0; i < 5 ; i++){
        printf("A[%d]= ", i+1);
        scanf("%d", &a[i]);
    }

    printf("Bubble Sort\n");

    printf("\nData items in original order\n");
    for(int i = 0; i < 5; i++){//印出尚未排序的陣列
        printf("%5d", a[i]);
    }printf("\n");


    printf("======================================\n");
    int switchcounter = 0;//測試該回合有沒有交換，先設定為無
    //進行尚未交換就提前結束的氣泡排續
    for(int i = 0; i < 4 ; i++){
        switchcounter = 0;
        //經過每一回合皆將最大者擺到最後面
        //例子就是排身高，所有人互比，每一次都是最改的站最前面
        for(int j = 0; j < 5 - i; j++){

            if(a[j] > a[j+1]){//如果該j項比j+1項大 就互換

                int temp = 0;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                //printf("w");
                switchcounter = 1;//有互換就將此值調成1
            }
        }

        //將每回合的排序結果印出來
        printf("PASS %d :", i+1);
        for(int k = 0; k < 5; k++)
            printf("%4d", a[k]);
        printf("\n");

        //printf("swc: %d     ", switchcounter);
        //沒有互換就將整個排序結束掉
        if(switchcounter == 0 )
            break;
    }
	return 0;
}
