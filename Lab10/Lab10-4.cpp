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
int isRepeat(int target, node* current)
{
    if (current->number == target) {//測試currentg是否與目標相同
        return 1;
    }
    if (!current->next) {//未與目標相同且是最後一項
        return 0;
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

    node* head = new node;
    head->number = rand() % (49 - 1 + 1) + 1;//將第一個變數給head

    //從head的後面開始做
    for (int i = 1; i < 7; i++) {
        printf("[i,%d]: ", i);
        int tempRan = 0;//宣告亂樹變數
        do {
            tempRan = rand() % (49 - 1 + 1) + 1;
        } while (isRepeat(tempRan, head));//測試此變數是否有重複

        //node* newNode = (node*)malloc(sizeof(node));
        node* newNode = new node;
        newNode->number = tempRan;//新增新節點也把剛確定為未重複的號碼寫進去


        node* current = head, * front = head;
        if (newNode->number <= head->number) {//新節點 比 頭還小
            newNode->next = head;
            head = newNode;
        }else{//沒有的話就把current推至下一項 並尋找其需要加的正確位置
            current = current->next;

            while (1)//從頭的後面那項開始檢查
            {
                if (current == nullptr) {//current已經到尾端 代表新節點最大 所以直接皆在尾端
                    front->next = newNode;
                    break;
                }
                if (newNode->number <= current->number) {//新節點 比此節點小
                    front->next = newNode;
                    newNode->next = current;
                    break;
                }
                front = current;
                current = current->next;
            }
        }

        printArray(head);
        printf("\n");
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
