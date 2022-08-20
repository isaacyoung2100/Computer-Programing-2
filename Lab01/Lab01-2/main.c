#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1){
        float x=0;
        printf("radius= ");
        scanf("%f", &x);
        printf("volume= %.2f\n", 3.14*x*x*x*4/3);
    }
    return 0;

}
