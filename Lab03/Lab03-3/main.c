#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], b[10];
    int cota = 0, cotb = 0;

    int i=0;
    char x;

    //�N��Ӱ}�C��J
    printf("�п�J�}�CA: ");
    do{
        scanf("%d", &a[i]);
        i++;
        cota = i;
    }while(x = getchar() != '\n');

    x = '0';
    i = 0;
    printf("�п�J�}�CB: ");
    do{
        scanf("%d", &b[i]);
        i++;
        cotb = i;
    }while(x = getchar() != '\n');

    //�i��
    /*for(int i = 0; i < cota; i++){
        printf("%4d", a[i]);
    }printf("\n");
    for(int i = 0; i < cotb; i++){
        printf("%4d", b[i]);
    }printf("\n");*/

    int choose;
    int ans[20];//�̫᪺���ׯx�}
    int bns[20];
    int sum = (cota + cotb);//���ea�Mb���x�}�[�J���ׯx�}���`��
    //�NA�MB��iANS
    for(i = 0; i < cota; i++){
        ans[i] = a[i];
    }
    for(int j = 0; i < sum && j < cotb ; i++, j++){
        ans[i] = b[j];
    }
    //display
    /*for(i = 0; i < sum; i++){
        printf("%4d", ans[i]);
    }printf("\n");*/

    //�i��Ѥj��p����w�ƧǪk
    for(int i = 0; i < sum - 1; i++){

        for(int j = i + 1; j < sum; j++){

            int temp = 0;
            if(ans[i] < ans[j]){
                temp = ans[i];
                ans[i] = ans[j];
                ans[j] = temp;
            }
        }
    }


    for(int i = 0; i < sum; i ++){
        bns[i] = ans[sum - i - 1];
    }

    printf("1: �Ѥp��j�i��Ƨ�, 2: �Ѥj��p�i��Ƨ�");scanf("%d", &choose);
    if(choose == 1){//�C�L�Ѥj��p
        for(i = 0; i < sum; i++){
            printf("%4d", bns[i]);
        }printf("\n");
    }else{//�C�L�Ѥj��p
        for(i = 0; i < sum; i++){
           printf("%4d", ans[i]);
        }printf("\n");
    }
    return 0;
}


