#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1){

        int x=0;
        printf("Enter the square side -1 to end: ");
        scanf("%d", &x);

        if(x < 0)
            break;
        //上邊
        for(int i = 0; i < x; i++){
            printf("*");
        }printf("\n");
        //中間空格
        for(int j = 0; j < (x - 2); j++){
            printf("*");
            for(int i = 0; i < (x - 2); i++)
                printf(" ");
            printf("*\n");
        }
        //底邊
        for(int i = 0; i < x; i++){
            printf("*");
        }printf("\n");

    }
    return 0;
}
