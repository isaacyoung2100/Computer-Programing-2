#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    while(1){
        int s=0;
        printf("�п�J�ݴ����t: ");
        scanf("%d", &s);

        printf("���t%d��", s);
        if(s > 72){
            printf("����\n");
        }
        else if(s >= 52 && s <= 72){
            printf("�j�e��\n");
        }
        else if(s >= 39 && s <= 54){
            printf("�e��\n");
        }
        else if(s >= 25 && s <= 29){
            printf("�j��\n");
        }
        else if(s <= 25){
            printf("���O�j��\n");
        }
    }
    return 0;
}
