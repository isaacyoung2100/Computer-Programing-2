#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("  ���     �Կ�HA     �Կ�HB     �Կ�HC     �Կ�HD\n");
    int array[5][4] = {
    {192, 48, 206, 37},
    {147, 90, 312, 21},
    {186, 12, 121, 38},
    {114, 21, 408, 39},
    {267, 13, 382, 29}
    };
    float data[2][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0}
    };

    //�L�X�G���x�}array
    for(int i = 0; i < 5; i++){
        printf("%6d", i+1);

        for(int j = 0; j < 4; j++){
            printf("%12d", array[i][j]);
            data[0][j] += array[i][j];//��N�C�C���ƥ[�J�Կ�Hdata�Ĥ@�C
        }
        printf("\n");
    }

    printf("�o����");
    for(int i = 0; i < 4; i++){//�L�X�o���}�C
        printf("%12.0f", data[0][i]);
        data[1][i] = (data[0][i] / 2683);//��N�벼�v��X�é�Jdata�ĤG�C
    }printf("\n");

    printf("�o���v");
    for(int i = 0; i < 4; i++){
        printf("%11.0f%%", (data[1][i])*100);
    }
    return 0;
}
