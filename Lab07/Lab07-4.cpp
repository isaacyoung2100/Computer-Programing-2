// Lab07-4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
int input(char a[100], int* spaces, int* pun)
{
    int i = 0;
    for (char x; (x = getchar()) != '\n'; i++) {
        if (x == EOF) {
            return 1;
        }
        a[i] = x;

        if (x == ' ') {//計算空格
            (*spaces)++;
        }else if (ispunct(x)) {//非數字 && 非英大 && 非英小 && 換行
            (*pun)++;
        }
    }
    a[++i] = '\0';

    return 0;
}
int main()
{
    char array[100][100], x;
    int i = 0, spaces = 0, punctuations = 0, stop = 0;

    while (1) {//可以輸入多行
        if (input(array[i], &spaces, &punctuations))//每行輸入 同時計算空格和標點符號
            break;
        i++;
    }
    printf("\nThe %d lines of text processed contained %d spaces and %d punctuation marks.", i, spaces, punctuations);//pum--因為結束字符是^Z要將其減掉
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