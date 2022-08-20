#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#define POSSIBILITIES 32
#define CHARACERS 7

int main()
{

    while(1){
        int ans[POSSIBILITIES][CHARACERS];
        char array[CHARACERS];//輸入的字串
        int fnum;//遇到第幾位#
        int bit[6] = {0, 0, 0, 0, 0, 0};//儲存每個井字號的0與1
        int bitcounter[6] = {1, 1, 1, 1, 1, 1};//用來幫助遇到第每個井字號的處理
        //           16 8  4  2  1



        printf("請輸入字串: ");
        gets(array);

/*
先印 在(反轉&歸1)
 00000 //11111
 00001 22221
 00010 33311
 00011 44421
 00100 55111
倒數第一個# 等於16 revert(每十六次換
倒數第二個# 等於8  revert(每八次換
倒數第三個# 等於4  revert(每四次換
倒數第四個# 等於2  revert(每兩次換
倒數第五個# 等於1  revert(每次換
*/
        for(int i = 0; i < POSSIBILITIES; i++){//因為題目給的是(5)個變數，所以知道會有2*2*2*2*2種可能的排列
//2    16 8 4 2 1
//fnum 1 2 3 4 5
//pow  4 3 2 1 0
            fnum = 1;
            for(int j = 0; j < CHARACERS; j++){//總共有(7)個數字
                //meet the symbol
                if(array[j] == '#'){

                    //直接將bit中的數字印出來
                    printf("%d", bit[fnum]);

                    //將bitcounter中的數字+1
                    bitcounter[fnum]++;

                    //如果加完之後 等於 2^現在位數的刺方
                    if(bitcounter[fnum] > pow(2, 5-fnum))
                    {
                        //printf("第%d位%d得反轉;", fnum, bitcounter[fnum]);
                        //printf("r%d", fnum);
                        //先將此bit做01反轉
                        bit[fnum] = 1 - bit[fnum];
                        //再將bitcounter歸回一，重新計算
                        bitcounter[fnum] = 1;
                    }

                    fnum++;



                }else{//meet numbers
                    printf("%c", array[j]);
                }

            }
            /*printf("        bitcounter[%d]= ", fnum);
            for(int i = 1; i < fnum; i++)
                printf("%d", bitcounter[i]);
            */
            printf("\n");

        }

    }

    return 0;
}
