#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	while (1) {
		int num1;
		int balance;
		char ch;

		system("cls");
		//cpp 아닌 c에서만 사용가능

		printf("#######################################################\n");
		printf("##                 자판기 프로그램                   ##\n");
		printf("#######################################################\n");

		
		printf("동전 투입 : ");
		scanf("%d", &balance);
		printf("-------------------------------------------------------\n");

		printf("1. 콜라(700원) 2. 사이다(600원) 3. 커피 4. 쥬스(1000원)\n");
		printf("메뉴 선택 : ");
		scanf("%d", &num1);
		printf("-------------------------------------------------------\n");

		if (num1 == 1) {
			balance -= 700;
			printf("콜라(700원)를 선택하셨습니다.\n잔돈은 %d입니다.\n", balance);
			printf("-------------------------------------------------------\n");
		}

		if (num1 == 2) {
			balance -= 600;
			printf("사이다(600원)를 선택하셨습니다.\n잔돈은 %d입니다.\n", balance);
			printf("-------------------------------------------------------\n");
		}

		if (num1 == 3) {
			int num2;
			printf("커피 사이즈 <1. Tall(1500원), 2. Grande(2000원)> : ");
			scanf("%d", &num2);
			printf("-------------------------------------------------------\n");

			if (num2 == 1) {
				printf("Tall 사이즈 커피가 나왔습니다.\n");
				balance -= 1500;
				printf("잔돈은 %d원입니다.\n", balance);
				printf("-------------------------------------------------------\n");
			}
			else {
				printf("Grande 사이즈 커피가 나왔습니다.\n");
				balance -= 2000;
				printf("잔돈은 %d원입니다.\n", balance);
				printf("-------------------------------------------------------\n");
			}
		}

		if (num1 == 4) {
			balance -= 1000;
			printf("쥬스(1000원)를 선택하셨습니다.\n잔돈은 %d입니다.\n", balance);
			printf("-------------------------------------------------------\n");
		}
		
		printf("프로그램을 진행하겠습니까?(Y/N)\n");
		scanf("%c", &ch);
		
		ch = getch();
		//화면 바로 꺼짐 없애주는 기능

		if (ch == 'y' || ch == 'Y')
			continue;
		else if (ch == 'n' || ch == 'N')
			break;
	}
	return 0;
}
