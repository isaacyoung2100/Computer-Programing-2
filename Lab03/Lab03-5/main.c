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
    for(int i = 0; i < 5; i++){//�L�X�|���ƧǪ��}�C
        printf("%5d", a[i]);
    }printf("\n");


    printf("======================================\n");
    int switchcounter = 0;//���ոӦ^�X���S���洫�A���]�w���L
    //�i��|���洫�N���e��������w����
    for(int i = 0; i < 4 ; i++){
        switchcounter = 0;
        //�g�L�C�@�^�X�ұN�̤j���\��̫᭱
        //�Ҥl�N�O�ƨ����A�Ҧ��H����A�C�@�����O�̧諸���̫e��
        for(int j = 0; j < 5 - i; j++){

            if(a[j] > a[j+1]){//�p�G��j����j+1���j �N����

                int temp = 0;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                //printf("w");
                switchcounter = 1;//�������N�N���Ƚզ�1
            }
        }

        //�N�C�^�X���Ƨǵ��G�L�X��
        printf("PASS %d :", i+1);
        for(int k = 0; k < 5; k++)
            printf("%4d", a[k]);
        printf("\n");

        //printf("swc: %d     ", switchcounter);
        //�S�������N�N��ӱƧǵ�����
        if(switchcounter == 0 )
            break;
    }
	return 0;
}
