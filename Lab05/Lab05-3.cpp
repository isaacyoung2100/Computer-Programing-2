// Lab05-3.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

int main()
{
    int i = 0;
    int sumV = 0, sumA = 0;

    while (1) {
        int id = 0, volum = 0, cost = 0;
        printf("請輸入顧客編號(輸入到-1，停止):");
        std::cin >> id;

        if (id == -1)    break;

        printf("請輸入用電量:");
        std::cin >> volum;

        printf("顧客編號為:%d\n", id);
        printf("用電量為:%d\n", volum);
        sumV += volum;
        
        int ans = 0;
        if (volum <= 300) {
            ans += volum * 9;
        }
        else if (volum > 300 && volum <= 600) {
            ans += 300 * 9;
            ans += (volum - 300) * 8;
        }
        else if (volum > 600 && volum <= 1000) {
            ans += 300 * 9;
            ans += 300 * 8;
            ans += (volum - 600) * 6;
        }
        else if (volum > 1000) {
            ans += 300 * 9;
            ans += 300 * 8;
            ans += 400 * 6;
            ans += (volum - 1000) * 5;
        }
        sumA += ans;
        printf("費用:%d\n", ans);
    }
      
    printf("總用電量為:%d\n", sumV);
    printf("總費用為:%d\n", sumA);
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
