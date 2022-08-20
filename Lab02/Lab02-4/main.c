#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Mc=0, Hc=0, Cc=0, Pc=0;//counters
    while(1){
        int position = 0;
        printf("Enter paycode < -1 to end >: ");
        scanf("%d", &position);
        if(position == -1) break;

        float Ms = 0;
        float HSalary = 0, HWorkedHours = 0, HOverWorked = 0, HTotalSalary = 0;//Hourly workers
        float WSales = 0, WTotalSalary = 0;
        float Pieces = 0, Wages = 0;
        switch(position){
            case 1:
                printf("Manager selected.\n"); Mc++;
                printf("Enter weekly salary: "); scanf("%f", &Ms);
                printf("The manager's pay is $%.2f\n\n", Ms);
                break;

            case 2:
                printf("Hourly workers selected.\n");  Hc++;
                printf("Enter hourly salary: "); scanf("%f", &HSalary);
                printf("Enter the total hours worked: "); scanf("%f", &HWorkedHours);

                if(HWorkedHours <= 40){
                    HOverWorked = 0;
                }else{
                    HOverWorked = HWorkedHours - 40;
                    HWorkedHours -= HOverWorked;
                }
                printf("Worker worked %.2f overtime hours.\n", HOverWorked);

                HTotalSalary = HWorkedHours * HSalary + HOverWorked * HSalary * 1.5;
                printf("Worker's pay is $%.2f\n\n", HTotalSalary);
                break;

            case 3:
                printf("Comission workers selected.\n"); Cc++;
                printf("Enter gross weekly sales: "); scanf("%f", &WSales);

                WTotalSalary = 250 + WSales * 0.057;
                printf("Commission worker's pay is $%.2f\n\n", WTotalSalary);
                break;

            case 4:
                printf("Pieceworkers workers selected.\n"); Pc++;
                printf("Enter number of pieces: "); scanf("%f", &Pieces);
                printf("Enter wage of pieces: "); scanf("%f", &Wages);
                printf("Pieceworker's pay is $%.2f\n\n", (Pieces * Wages));
                break;

            default:
                printf("Invalid pay code.\n\n");
                break;
        }
    }

    printf("Total number of managers paid           : %d\n", Mc);
    printf("Total number of hourly workers paid     : %d\n", Hc);
    printf("Total number of comission workers paid  : %d\n", Cc);
    printf("Total number of pieceworkers paid       : %d\n", Pc);
    return 0;
}
