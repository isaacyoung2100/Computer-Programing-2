#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ans[4][4];
    char array[4];
    int fa=0, fb=0, fnum=1;

    while(1){
        printf("�п�J�r��: ");
        gets(array);
        //puts(array);

        for(int i = 0; i < 4; i++){//�]���D�ص����O����ܼơA�ҥH���D�|��2*2�إi�઺�ƦC
                if(i > 1)
                    fa = 1;
            for(int j = 0; j < 4; j++){//�`�@���|�ӼƦr

                if(array[j] == '#'){//meet the symbol

                    if(fnum == 1){//meet the first symbol
                        ans[i][j] = fa;
                        fnum++;
                    }else if(fnum == 2){//meet the second
                        ans[i][j] = fb;
                        fnum = 1;//���s�J��symbol
                        fb = 1 - fb;//revert ever time
                    }

                }else{//meet numbers
                    int temp;
                    temp = array[j] - '0';//int = char - char
                    ans[i][j] = temp;
                }
            }
        }

        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                printf("%d", ans[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
