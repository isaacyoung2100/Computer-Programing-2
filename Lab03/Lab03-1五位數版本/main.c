#include <stdio.h>
#include <stdlib.h>

#define POSSIBILITIES 8
#define CHARACERS 5

int main()
{

    while(1){
        int ans[POSSIBILITIES][CHARACERS];
        char array[CHARACERS];//輸入的字串
        int fnum=1;//遇到第幾個#
        int fa=0, fb=0, fc=0;
        int ac=1;//用來幫助遇到第二個井字號的處理




        printf("請輸入字串: ");
        gets(array);
        //puts(array);

        for(int i = 0; i < POSSIBILITIES; i++){//因為題目給的是(5)個變數，所以知道會有2*2*2種可能的排列
                if(i > 3)
                    fa = 1;

            for(int j = 0; j < CHARACERS; j++){//總共有四個數字
                //meet the symbol
                if(array[j] == '#'){

                    //meet the first symbol
                    if(fnum == 1){
                        //printf("a");
                        ans[i][j] = fa;

                        fnum++;
                        ac++;

                    //meet the second
                    }else if(fnum == 2){
                        //printf("b");
                        ans[i][j] = fb;
                        if(ac > 2){
                            fb = 1 - fb;//revert
                            ac -= 2;
                        }

                        fnum++;
                    //meet the third
                    }else if(fnum == 3){
                        //printf("c\n");
                        ans[i][j] = fc;
                        fc = 1 - fc;//revert ever time

                        fnum = 1;//重新遇見symbol
                    }

                }else{//meet numbers
                    int temp;
                    temp = array[j] - '0';//int = char - char
                    ans[i][j] = temp;
                }
            }
        }

        for(int i = 0; i < POSSIBILITIES; i++){
            for(int j = 0; j < CHARACERS; j++){
                printf("%d", ans[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}




