#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    while(1){
        int ey=0, wy=0;
        printf("����h�֦~?");
        scanf("%d", &ey);

        wy = ey + 1911;
        if((wy%4000) == 0){
            printf("���� %d ���O�|�~\n", ey);
        }else if((wy%400) == 0){
            printf("���� %d �O�|�~\n", ey);
        }else if((wy%100) == 0){
            printf("���� %d ���O�|�~\n", ey);
        }else if((wy%4) == 0){
            printf("���� %d �O�|�~\n", ey);
        }else{
            printf("���� %d ���O�|�~\n", ey);
        }
    }

    return 0;
}
