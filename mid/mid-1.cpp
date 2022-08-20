// mid-1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h> 
#include <stdlib.h> 


int main()
{
    //int a[3][3] = (int *)malloc(sizeof(int) * 9);
    //int b[3][3] = (int *)malloc(sizeof(int) * 9);
    int a[9], b[9];
    
    int i=0,m=0;
    int* aptr = &a[0], * bptr = &b[0];

    printf("矩陣a:\n");
    for(i=0;i<3;i++)
    {
        for(m=0;m<3;m++)
        {
            printf("請輸入(%d,%d)的值(列,行): ", i+1, m+1);
            scanf_s("%d", (aptr + i*3 + m));
        }
    }
    printf("\n");

    printf("矩陣b:\n");
    for (i = 0; i < 3; i++)
    {
        for (m = 0; m < 3; m++)
        {
            printf("請輸入(%d,%d)的值(列,行): ", i + 1, m + 1);
            scanf_s("%d", (bptr + i * 3 + m));
        }
    }
    printf("\n");



    printf("矩陣a:\n");
    for (i = 0; i < 3; i++)
    {
        for (m = 0; m < 3; m++)
        {
            printf("%4d", *(aptr + i * 3 + m));

        }
        printf("\n");
    }

    printf("矩陣b:\n");
    for(i=0;i<3;i++)
    {
        for(m=0;m<3;m++)
        {
            printf("%4d", *(bptr+i*3+m));
          
        }
        printf("\n");
    }

    printf("開始計算...\n");
    printf("答案:\n");
    for (i = 0; i < 3; i++)
    {
        for (m = 0; m < 3; m++)
        {
            printf("%4d",  ( * (aptr + i * 3 + m) + *(bptr + i * 3 + m) ));

        }
        printf("\n");
    }
    

    return 0;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
