#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1){
        float x;
        scanf("%f", &x);
        printf("miles= %f\n", x);
        printf("%f miles= %f km\n", x, x*(1.6));
    }

    return 0;
}
