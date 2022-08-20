// Lab05-1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<time.h>

int main()
{
    int n = 0;
    do {
        printf("Please input a number n ( 0 < n <= 9 )");
        std::cin >> n;
    } while (n <= 0 || n > 9);

    int cards[20][18];
    int MaxN = 2 * n;
    srand(time(NULL));

    //產生第一列的亂數
    for (int i = 0; i < MaxN; i++) {
        int temp = 0, repeat = 0;
        do {
            repeat = 0;
            temp = rand() % (MaxN - 1 + 1) + 1;

            //檢查temp是否與先前的數字重複
            for (int j = 0; j < i; j++) {
                if (temp == cards[0][j]) 
                    repeat = 1;

            }
        } while (repeat);

        cards[0][i] = temp;
    }
    //print the original column
    for (int i = 0; i < MaxN; i++) {
        printf("%4d", cards[0][i]);
        if (i == (n - 1))
            printf("  ||");
    }printf("\n");

    //開始隨機洗牌
    for (int i = 1; ; i++) {
        //洗牌
        for (int j = 0; j < n; j++) {
            cards[i][j * 2] = cards[i - 1][j];
            cards[i][j * 2 + 1] = cards[i - 1][j + n];
        }

        //印出洗完的
        //print the original column
        for (int k = 0; k < MaxN; k++) {
            printf("%4d", cards[i][k]);
            if (k == (n - 1))
                printf("  ||");
        }printf("\n");

        //先將S設為1，但在比對過程中有不相同的項目變成0
        int same = 1;
        for (int k = 0; k < MaxN; k++) {
            if (cards[i][k] != cards[0][k]) {
                same = 0;
                break;
            }
        }
        if (same)//如果全程相同結束程式
            break;
    }

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
