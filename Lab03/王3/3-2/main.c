#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A=0,B=0,C=0,D=0;
    float a,b,c,d,total=0;
    int i=1,j=0;
    int array[5][4]=
    {
    {192,48,206,37},
    {147,90,312,21},
    {186,12,121,38},
    {114,21,408,39},
    {267,13,382,29},
    };
    printf("選區       候選人A  候選人B 候選人C 候選人D\n");
    for(i=0;i<5;i++)
    {
        printf("  %d\t",i+1);
        for(j=0;j<4;j++)
        {

            printf("     %3d",array[i][j]);


        }
            printf("\n");
    }

    for(i=0;i<5;i++)
    {
        array[i][0];
        A=A+array[i][0];
    }
    for(i=0;i<5;i++)
    {
        array[i][1];
        B=B+array[i][1];
    }
    for(i=0;i<5;i++)
    {
        array[i][2];
        C=C+array[i][2];
    }
    for(i=0;i<5;i++)
    {
        array[i][3];
        D=D+array[i][3];
    }
    total=A+B+C+D;
    a=A;
    b=B;
    c=C;
    d=D;
    printf("得票數%10d%9d%7d%8d\n",A,B,C,D);
    printf("得票率%9.0f%% %6.0f%% %6.0f%% %6.0f%%",a/total*100,b/total*100,c/total*100,d/total*100);
    return 0;
}
