#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int main()
{
    char ans[11];//�s�񥿸�
    int id[8];//�s��8��ǥͪ��Ǹ�
    char idr[8][11];//�s������ǥͪ��^��


    printf("��J���T�ѵ�: ");
    gets(ans);

    printf("��J�C�Ӿǥ;Ǹ��P�񵪵���: \n");
    for(int i = 0; i < 8 ; i++){//�̧ǿ�J�Q��ǥͪ����
        //printf("��%d��", i);
        //scanf("%d %s", &id[i], idr[i]);//�����o�ǥ;Ǹ�, �A���o�Ӿǥͪ��ݨ��^��
        scanf("%d", &id[i]);

        scanf("%s", idr[i]);
        //printf("%s",idr[i]);
    }


    //�p��C��P�Ǫ������D��
    int correct[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int BEST = 0;//��X�̨��D��

    for(int i = 0; i < 8; i++){//8��P��
        for(int j = 0; j < 10; j++){//10�D�^��
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

    //�p��X�Ʀ쵥��
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

    printf("��X: \n");
    printf("���T���׬�: %s\n", ans);
    printf("�Ǹ�         ����        �����D��    ����\n");
    printf("-------------------------------------------\n");
    for(int i = 0; i < 8; i++){
        //printf("%d      %s\n", id[i], idr[i]);
        printf("%d      %s", id[i], idr[i]);
        printf("%10d%10c\n", correct[i], level[i]);
    }
    return 0;
}
