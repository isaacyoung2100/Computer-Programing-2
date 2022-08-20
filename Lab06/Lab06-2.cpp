// Lab06-2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int strlength(char *a)
{
    char x;
    int len = 0, i = 0;
    while (a[i] != '\0')
    {
        len++;
        i++;
    }
    return len;
}
int main()
{
    char a[50], b[50];
    printf("請輸入字串1: ");
    cin.getline(a, 50);

    printf("請輸入字串2: ");
    cin.getline(b, 50);

    printf("字串一: ");
    cout << a <<  "\n";
    printf("字串二: ");
    cout << b;

    int alen = 0, blen = 0;
    alen = strlength(a);
    blen = strlength(b);
    //printf("%d,%d", alen, blen);
    
    printf("\n字串一反轉: ");
    for (int i = alen - 1; i >= 0; i--)  printf("%c", a[i]);
    printf("\n字串二反轉: ");
    for (int i = blen - 1; i >= 0; i--)  printf("%c", b[i]);
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
