// Lab10-3.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <time.h>

using namespace std;

class node {
public:
    int number = 0;
    node* next = nullptr;
};

//做到尾端last且 沒有重複:回傳last<=>有重複:回傳nullptr
node* isRepeat(int target, node* current)
{
    if (current->number == target) {//測試currentg是否與目標相同
        return nullptr;
    }
    if (!current->next) {//未與目標相同且是最後一項
        return current;
    }
    isRepeat(target, current->next);
}

void printArray(node* current)
{
    if (current) {
        printf("%d ", current->number);
        printArray(current->next);
    }
}

int main()
{
    cout << "開獎球如下(最後一球為特別號):\n";
    srand(time(NULL));

    node* head = new node, * last = head;
    head->number = rand() % (94 - 28 + 1) + 28;//將第一個變數給head

    //從head的後面開始做
    for (int i = 1; i < 7; i++) {
        int tempRan = 0;//宣告亂樹變數
        do {
            tempRan = rand() % (49 - 1 + 1) + 1;
        } while (!(last = isRepeat(tempRan, head)));//測試此變數是否有重複

        //node *newNode = (node*)malloc(sizeof(node));
        node* newNode = new node;
        newNode->number = tempRan;//新增新節點也把剛確定為未重複的號碼寫進去

        last->next = newNode;
    }
    printArray(head);
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
