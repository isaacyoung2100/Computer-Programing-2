// mid-5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
int GCD(int m, int n)//最大公因
{
    int max = 0;
    int top = 0;
    (m > n) ? top = m : top = n;

    for (int i = 1; i < top; i++) {
        if ((m % i == 0) && (n % i == 0)) {
            max = i;
        }
    }
    return max;
}

int LCM(int m, int n)
{
    return m * n / GCD(m, n);
}

int main()
{
    printf("Please input GCD & LCM of two number(m,n):");
    int m = 0, n = 0;
    scanf_s("%d %d", &m, &n);

    printf("%d & %d GCD is : %d\n", m, n, GCD(m, n));
    printf("%d & %d LCM is : %d\n", m, n, LCM(m, n));
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
