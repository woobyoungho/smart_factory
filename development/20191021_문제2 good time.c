#include <stdio.h>

int main() {
		char ch[10]; 
		char p;
		int i;

		while (1) {
			system("cls");
		
			printf("문장 입력 : ");
			for (i = 0; i < 10; i++) {
				scanf("%c", &ch[i]);
			}

			printf("문장 출력 : ");
			for (i = 0; i < 10; i++) {
				printf("%c", ch[i]);
			}

			printf("프로그램을 진행하겠습니까?(Y/N)");
			scanf("%c", &p);
			p = getch();

			if (p == 'Y' || p == 'y')
				continue;
			else if (p == 'N' || p == 'n')
				break;
		}

	return 0;
}