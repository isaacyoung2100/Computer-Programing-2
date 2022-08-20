#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 0, number = 0,  largest = 0;

    printf("請輸入第一個數: ");
    scanf("%d", &number);
    largest = number;
    counter++;

    while(1){
        printf("請輸入下一個數: ");
        scanf("%d", &number);
        if(number > largest)
            largest = number;

        counter++;
        if(counter == 6){
            break;
        }
    }
    printf("最大數是: %d", largest);

    return 0;
}
