#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 0, number = 0,  largest = 0;

    printf("�п�J�Ĥ@�Ӽ�: ");
    scanf("%d", &number);
    largest = number;
    counter++;

    while(1){
        printf("�п�J�U�@�Ӽ�: ");
        scanf("%d", &number);
        if(number > largest)
            largest = number;

        counter++;
        if(counter == 6){
            break;
        }
    }
    printf("�̤j�ƬO: %d", largest);

    return 0;
}
