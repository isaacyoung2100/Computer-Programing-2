// final-001.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
struct data {
    int ID = 0;
    float annualIncome = 0;
    int families = 0;
};
int main()
{
    FILE *in;
    if (fopen_s(&in, "C:\\Users\\BNL\\Downloads\\1104_C_Final\\1104_C_Final\\Q1note.txt", "r+")) {
        printf("Can't find any information!!\n");
        return 1;
    }
    //system("PAUSE");
    data arr[20];
    int i = 0, j = 0;
    float average = 0;
    //if (!in) {
        
    //}
    //else {
        printf("  ID NO.    Annual Incom   Families\n");
        printf("-------------------------------------\n");
        while (fscanf_s(in, "%d %f %d", &arr[i].ID, &arr[i].annualIncome, &arr[i].families) != EOF) {
            printf("%8d %15.0f %10d\n", arr[i].ID, arr[i].annualIncome, arr[i].families);
            average += arr[i].annualIncome;
            i++;
        }
        average /= i;

        float poor = 0;
        printf("The ID No. of families which annual income exceeds average (%f)\n\n", average);
        for (j = 0; j < i; j++) {
            float P = 6500 + 750 * (arr[j].families - 2);
            //printf("%d %.0f %d\n", arr[j].ID, arr[j].annualIncome, arr[j].families);
            if (arr[j].annualIncome >= average) {
                printf("%d\n", arr[j].ID);
            }
            if(arr[j].annualIncome < P) {
                poor++;
            }
        }
        printf("\nThe poverty rate is %.3f", (poor / i));
        return 0;
    //}

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
