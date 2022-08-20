#include <stdio.h>
#include <stdlib.h>

int main()
{
   int  i=0;
   int array1[10];
   int array2[10];
   int array3[20];
   for(i=0;i<10;i++)
   {
       scanf("%d",&array1[i]);
   }
   for(i=0;i<10;i++)
   {
       scanf("%d",&array2[i]);
   }
   for(i=0;i<10;i++)
   {
       printf("%d",array1[i]);
   }

}
