#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6] = {0, 0, 0, 0, 0, 0};
    char c[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    int total=0;

    while(1){
        int vote = 0;
        printf("Please input ticket no.<1~6,0:over>: ");scanf("%d", &vote);
        if(vote == 0)      break;

        total++;
        a[vote - 1]++;
    }

    for(int i = 0; i < 6; i++)
        printf("%c ", c[i]);
    printf("\n");
    for(int i = 0; i < 6; i++)
        printf("%d ", a[i]);
    printf("\n");

    //�o���O���v����w����k�A�O�ڰO���٨S�^�ӭJ�üg�X�Ӫ��A�����L�o����G�]���o�q
    for(int i = 0; i < 5; i++){
        printf("%d: \n", i);
        for(int j = i + 1; j < 6; j++){

            int temp = 0;
            char ctemp;

            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                ctemp = c[i];
                c[i] = c[j];
                c[j] = ctemp;
                /*
                for(int i = 0; i < 6; i++)
                printf("%c ", c[i]);
                printf("\n");
                for(int i = 0; i < 6; i++)
                    printf("%d ", a[i]);
                printf("\n");*/
            }
        }
    }


    for(int i = 0; i < 6; i++)
        printf("%c ", c[i]);
    printf("\n");
    for(int i = 0; i < 6; i++)
        printf("%d ", a[i]);
    printf("\n");

    printf("       RANK    NAME    VOTE\n");
    for(int i = 1; i <=6; i++){
        printf("         %d", i);
        printf("       %c", c[i - 1]);
        printf("       %d\n", a[i - 1]);
    }
    printf("                  TOTAL: %d", total);
    return 0;
}
