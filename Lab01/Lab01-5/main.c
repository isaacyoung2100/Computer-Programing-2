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

    a = (a + 7)%10;//4 => 11 ==> 1
    b = (b + 7)%10;//5 => 12 ==> 2
    c = (c + 7)%10;//6 => 13 ==> 3
    d = (d + 7)%10;//1 => 8 ==> 8
    //printf("%d, %d, %d, %d\n", a,b,c,d);

    int ans = 0;
    ans = c*1000 + d*100 + a*10 + b;

    printf("Encrypted number is %d", ans);
    return 0;
}
