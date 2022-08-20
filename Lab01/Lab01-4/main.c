#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    while(1){
        int s=0;
        printf("請輸入需測風速: ");
        scanf("%d", &s);

        printf("風速%d為", s);
        if(s > 72){
            printf("颶風\n");
        }
        else if(s >= 52 && s <= 72){
            printf("強疾風\n");
        }
        else if(s >= 39 && s <= 54){
            printf("疾風\n");
        }
        else if(s >= 25 && s <= 29){
            printf("強風\n");
        }
        else if(s <= 25){
            printf("不是強風\n");
        }
    }
    return 0;
}
