// Lab10-2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <queue>
using namespace std;

class node {
    public:
        node* Lchild = nullptr;
        node* Rchild = nullptr;
        int data = 0;
};


void dataEnter(queue<int> *input)
{
    char x;
    int a = 0;
    for (int i = 0; ; i++) {
        cin >> a;
        input->push(a);

        if ((x = getchar()) == '\n') {
            break;
        }
    }
}

void inorder(node* tree)
{
    if (tree) {
        inorder(tree->Lchild);
        printf("%d ", tree->data);
        inorder(tree->Rchild);
    }
}

void buildTree(node *root, queue<int>* q)
{   
    //先給root值
    root->data = q->front();
    q->pop();

    while (!q->empty())//將queue內中的所有數值送進去創造二元樹
    {
        //創建新節點皆取Q的第一項
        node* newNode = new node();
        newNode->data = q->front();q->pop();

        node* current = root, *front = root;
        //找出newNode要加哪裡
        while (1)
        {
            if (current == nullptr) {//如果目前是NULL就加在這
                if (newNode->data < front->data) {
                    front->Lchild = newNode;
                }
                else {
                    front->Rchild = newNode;
                }
                break;
            }
            
            if (newNode->data < current->data) { //新節點比目前的小
                front = current;
                current = current->Lchild;
            }
            else// if(newNode->data > current->data) //新節點比目前大
            {
                front = current;
                current = current->Rchild;
            }
        }
    }
}

void whoIsYourDaddy(int target, node *head)
{
    node* current = head, *front = head;
    node a;
    a.data
        a->
        int d;
    

    if (current->data == target) {
        printf("無父節點\n");
        return;
    }

    while (1) {
        if (current->data == target) {
            printf("%d\n", front->data);
            break;
        }
        else {
            front = current;
            if (target < current->data) {
                current = current->Lchild;
            }
            else {
                current = current->Rchild;
            }
        }
    }
}
int main()
{   
    queue<int> *q = new queue<int>;

    cout << "請輸入資料: ";
    dataEnter(q);

    node* tree = new node;
    buildTree(tree, q);
    inorder(tree);
    cout << "\n";

    while (1)
    {
        cout << "請輸入找其父節點的資料(-1 to end): ";
        int target = 0;
        cin >> target;

        if (target == -1)    break;
        whoIsYourDaddy(target, tree);
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
