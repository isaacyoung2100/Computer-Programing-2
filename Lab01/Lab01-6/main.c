#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
    printf("Enter a four-digit number to be encrypted: ");
    scanf("%d", &num);

    int a, b, c, d;
    a = num/1000;
    b = num/100 - a*10;
    c = num/10 - num/100*10;
    d = num%10;
    //printf("%d, %d, %d, %d\n", a,b,c,d);

    a = (a + 3)%10;
    b = (b + 3)%10;
    c = (c + 3)%10;
    d = (d + 3)%10;
    //printf("%d, %d, %d, %d\n", a,b,c,d);

    int ans = 0;
    ans = c*1000 + d*100 + a*10 + b;

    printf("Encrypted number is %d", ans);
    return 0;
}
