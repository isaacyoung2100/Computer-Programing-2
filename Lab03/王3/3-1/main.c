#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
   char array[5],array1[5],array2[5],array3[5],array4[5];
  while(1)
   {
       printf("請輸入字串:");
       gets(array);
       for(i=0;i<4;i++)
       {
           array1[i]=array[i];
       }
       for(i=0;i<4;i++)//將#換成1
       {
           if(array1[i]=='#')
           {
               array1[i]='1';
           }
       }
       for(i=0;i<4;i++)//將#換成0
       {
           array2[i]=array[i];
       }
       for(i=0;i<4;i++)
       {
           if(array2[i]=='#')
           {
               array2[i]='0';
           }
       }
       for(i=0;i<4;i++)
       {
           array3[i]=array[i];
       }
       for(i=0;i<4;i++)
       {
           if(array3[i]=='#')//將第一個#換成1
           {
               int a=0;
               a=i;
               array3[a]='1';
               break;
           }
       }
       for(i=0;i<4;i++)//將第二個#換成0
       {
           if(array3[i]=='#')
           {
               int a=0;
               a=i;
               array3[a]='0';
           }
       }
       for(i=0;i<4;i++)
       {
           array4[i]=array[i];
       }
       for(i=0;i<4;i++)
       {
           if(array4[i]=='#')//將第一個#換成0
           {
               int a=0;
               a=i;
               array4[a]='0';
               break;
           }
       }
       for(i=0;i<4;i++)
       {
           if(array4[i]=='#')//將第二個#換成1
           {
               int a=0;
               a=i;
               array4[a]='1';
           }
       }
       printf("%s\n%s\n%s\n%s\n",array1,array2,array3,array4);

    }
}
