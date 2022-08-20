#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    char array[5];//0 1 2 3 4

    while(1){
        array[5] = "00000";//初始化為零0 1 2 3 4
        printf("Enter a binary number < 5 digits maximum >, -1 to end: ");

        gets(array);//讀取整串陣列
        if(array[0] == '-')     break;
        /*for(int i = 0; i <= 4; i++){
            if(array[0] == '-')    return 0;

            printf("%d: %c\n", i, array[i]);
        }*/

        int length = strlen(array);//取得字串長度
        //printf("strlen : %d\n", length);

        int ans = 0, m = 1;
        for(int i = (length - 1); i >= 0; i--){//從底往回

            if(array[i] == '1'){

                ans = ans + 1*m;
                m *= 2;//二進制乘數
                //printf("ans= %d, m= %d\n", ans, m);

            }else if(array[i] == '0'){
                m *= 2;
            }
        }

        printf("The decimal equivalent of %s is %d\n", array, ans);
    }
    return 0;
}
