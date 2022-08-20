
// Lab09-4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <iostream>
#define Max 4

struct person
{
    char name[10];
    char sex;
    char hair[8];
    char eye[8];
    char religion[15];
    int height, weight;
}a[4];

void inputString(char* a)
{
    char x;
    for (int i = 0; ; i++) {
        //printf("%d", i);
        x = getchar();
        if (x == '\n') {
            *(a + i) = '\0';
            break;
        }

        *(a + i) = x;
    }
}
void printStruct(person a)//印出該人類的所有數據
{   
    
    printf("%12s", a.name);
    printf("%13d", a.height);
    printf("%10d", a.weight);
    printf("%10c", a.sex);
    printf("%12s", a.hair);//出問題
    printf("%12s", a.eye);
    printf("%20s", a.religion);
    printf("\n");
}

void BubbleSort(person *a)//泡沫排序名字
{
    for (int i = 0; i < (Max - 1); i++) {
        for (int j = 0; j < Max - i - 1; j++) {
            if (a[j].name[0] > a[j + 1].name[0]) {
                printf("[%d,%d]", j, j+1);
                person temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    for (int i = 0; i < Max; i++) {
        char x;
        printf("Name?");
        inputString(a[i].name);
        //while ((x = getchar()) != EOF && x != '\n');

        printf("Height?");
        std::cin >> a[i].height;
        while ((x = getchar()) != EOF && x != '\n');

        printf("Weight?");
        std::cin >> a[i].weight;
        while ((x = getchar()) != EOF && x != '\n');

        printf("Sex?");
        std::cin >> a[i].sex;
        while ((x = getchar()) != EOF && x != '\n');

        printf("Hair?");
        inputString(a[i].hair);
        //while ((x = getchar()) != EOF && x != '\n');

        printf("Eye?");
        inputString(a[i].eye);
        //while ((x = getchar()) != EOF && x != '\n');

        printf("Religion?");
        inputString(a[i].religion);
        //while ((x = getchar()) != EOF && x != '\n');
    }

    printf("        Name        Height      Weight    Sex        Hair         Eye            Religion\n");
    printf("------------------------------------------------------------------------------------------------------\n");
    for (int j = 0; j < Max; j++) {
        printStruct(a[j]);
    }printf("\n");

    BubbleSort(a);
   
    printf("        Name        Height      Weight    Sex        Hair         Eye            Religion\n");
    printf("------------------------------------------------------------------------------------------------------\n");
    for (int j = 0; j < Max; j++) {
        printStruct(a[j]);
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
