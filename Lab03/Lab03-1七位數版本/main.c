#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#define POSSIBILITIES 32
#define CHARACERS 7

int main()
{

    while(1){
        int ans[POSSIBILITIES][CHARACERS];
        char array[CHARACERS];//��J���r��
        int fnum;//�J��ĴX��#
        int bit[6] = {0, 0, 0, 0, 0, 0};//�x�s�C�Ӥ��r����0�P1
        int bitcounter[6] = {1, 1, 1, 1, 1, 1};//�Ψ����U�J��ĨC�Ӥ��r�����B�z
        //           16 8  4  2  1



        printf("�п�J�r��: ");
        gets(array);

/*
���L �b(����&�k1)
 00000 //11111
 00001 22221
 00010 33311
 00011 44421
 00100 55111
�˼ƲĤ@��# ����16 revert(�C�Q������
�˼ƲĤG��# ����8  revert(�C�K����
�˼ƲĤT��# ����4  revert(�C�|����
�˼Ʋĥ|��# ����2  revert(�C�⦸��
�˼ƲĤ���# ����1  revert(�C����
*/
        for(int i = 0; i < POSSIBILITIES; i++){//�]���D�ص����O(5)���ܼơA�ҥH���D�|��2*2*2*2*2�إi�઺�ƦC
//2    16 8 4 2 1
//fnum 1 2 3 4 5
//pow  4 3 2 1 0
            fnum = 1;
            for(int j = 0; j < CHARACERS; j++){//�`�@��(7)�ӼƦr
                //meet the symbol
                if(array[j] == '#'){

                    //�����Nbit�����Ʀr�L�X��
                    printf("%d", bit[fnum]);

                    //�Nbitcounter�����Ʀr+1
                    bitcounter[fnum]++;

                    //�p�G�[������ ���� 2^�{�b��ƪ����
                    if(bitcounter[fnum] > pow(2, 5-fnum))
                    {
                        //printf("��%d��%d�o����;", fnum, bitcounter[fnum]);
                        //printf("r%d", fnum);
                        //���N��bit��01����
                        bit[fnum] = 1 - bit[fnum];
                        //�A�Nbitcounter�k�^�@�A���s�p��
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
