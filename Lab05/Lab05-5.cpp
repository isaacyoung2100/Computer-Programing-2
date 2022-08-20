// Lab05-5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<time.h>

int main()
{
	srand(time(NULL));
	int plane[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int t = 5, n = 5;
    printf("歡迎使用 TTU 航空公司定位系統!\n");
    printf("===================================\n");

	while (1){
		printf("\n頭等艙還有 %d 個座位 / 經濟艙上有 %d 個座位\n", t, n);

		printf("訂購頭等艙請輸入 1 ，訂購經濟艙請輸入 2 :");
		char cho;
		cho = getchar();

		if (cho == '1') {//選擇頭等艙
			if (t == 0) {//位置已滿
				printf("頭等艙座位已滿! 請問是否要改訂經濟艙?(是 請按1)(否 請按2): ");

				char c, sw;
				while ((c = getchar()) != EOF && c != '\n');//不停地使用getchar()獲取緩衝中字元，直到獲取的c是“\n”或檔案結尾符EOF為止
				if ((sw = getchar()) == '1')		goto NORMAL;
			}else {//位置還有
				while (1) {
					TOPCLASS:
						int randPick = rand() % (4 - 0 + 1) + 0;//挑選陣列0-4
						if (plane[randPick] == 0) {//隨機挑選的座位還未被選取
							printf("您的座位號碼為 %d 號\n", randPick + 1);
							plane[randPick] = 1;//該座位標記為已經被選
							t--;
							break;
					}
				}
				
			}

		}
		else if (cho == '2') {//選擇經濟艙
			if (n == 0) {//位置已滿
				printf("經濟艙座位已滿! 請問是否要改訂頭等艙?(是 請按1)(否 請按2): ");

				char c, sw;
				while ((c = getchar()) != EOF && c != '\n');//不停地使用getchar()獲取緩衝中字元，直到獲取的c是“\n”或檔案結尾符EOF為止
				if ((sw = getchar()) == '1')		goto TOPCLASS;
			}else {//位置還有
				while (1) {
					NORMAL:
						int randPick = rand() % (9 - 5 + 1) + 5;//挑選陣列5-9號
						if (plane[randPick] == 0) {//隨機挑選的座位還未被選取
							printf("您的座位號碼為 %d 號\n", randPick + 1);
							plane[randPick] = 1;//該座位標記為已經被選
							n--;
							break;
						}
				}

			}

		}

		printf("您是否要離開定位系統? (是 請按1)(否 請按2): ");
		
		char c, leave;
		while ((c = getchar()) != EOF && c != '\n');//不停地使用getchar()獲取緩衝中字元，直到獲取的c是“\n”或檔案結尾符EOF為止
		if ((leave = getchar()) == '1')	    break;

		while ((c = getchar()) != EOF && c != '\n');//不停地使用getchar()獲取緩衝中字元，直到獲取的c是“\n”或檔案結尾符EOF為止
	}

	printf("本班機上有座位號碼");
	for (int i = 0; i < 10; i++) {
		if (plane[i] == 0)
			printf("%d ", i+1);
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
