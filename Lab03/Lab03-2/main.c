#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("  選區     候選人A     候選人B     候選人C     候選人D\n");
    int array[5][4] = {
    {192, 48, 206, 37},
    {147, 90, 312, 21},
    {186, 12, 121, 38},
    {114, 21, 408, 39},
    {267, 13, 382, 29}
    };
    float data[2][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0}
    };

    //印出二維矩陣array
    for(int i = 0; i < 5; i++){
        printf("%6d", i+1);

        for(int j = 0; j < 4; j++){
            printf("%12d", array[i][j]);
            data[0][j] += array[i][j];//邊將每列票數加入候選人data第一列
        }
        printf("\n");
    }

    printf("得票數");
    for(int i = 0; i < 4; i++){//印出得票陣列
        printf("%12.0f", data[0][i]);
        data[1][i] = (data[0][i] / 2683);//邊將投票率算出並放入data第二列
    }printf("\n");

    printf("得票率");
    for(int i = 0; i < 4; i++){
        printf("%11.0f%%", (data[1][i])*100);
    }
    return 0;
}
