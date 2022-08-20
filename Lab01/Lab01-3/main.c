#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    while(1){
        int ey=0, wy=0;
        printf("民國多少年?");
        scanf("%d", &ey);

        wy = ey + 1911;
        if((wy%4000) == 0){
            printf("民國 %d 不是閏年\n", ey);
        }else if((wy%400) == 0){
            printf("民國 %d 是閏年\n", ey);
        }else if((wy%100) == 0){
            printf("民國 %d 不是閏年\n", ey);
        }else if((wy%4) == 0){
            printf("民國 %d 是閏年\n", ey);
        }else{
            printf("民國 %d 不是閏年\n", ey);
        }
    }

    return 0;
}
