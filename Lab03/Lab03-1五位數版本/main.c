#include <stdio.h>
#include <stdlib.h>

#define POSSIBILITIES 8
#define CHARACERS 5

int main()
{

    while(1){
        int ans[POSSIBILITIES][CHARACERS];
        char array[CHARACERS];//��J���r��
        int fnum=1;//�J��ĴX��#
        int fa=0, fb=0, fc=0;
        int ac=1;//�Ψ����U�J��ĤG�Ӥ��r�����B�z




        printf("�п�J�r��: ");
        gets(array);
        //puts(array);

        for(int i = 0; i < POSSIBILITIES; i++){//�]���D�ص����O(5)���ܼơA�ҥH���D�|��2*2*2�إi�઺�ƦC
                if(i > 3)
                    fa = 1;

            for(int j = 0; j < CHARACERS; j++){//�`�@���|�ӼƦr
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

                        fnum = 1;//���s�J��symbol
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




