#include <stdio.h>

int main() {
		char ch[10]; 
		char p;
		int i;

		while (1) {
			system("cls");
		
			printf("���� �Է� : ");
			for (i = 0; i < 10; i++) {
				scanf("%c", &ch[i]);
			}

			printf("���� ��� : ");
			for (i = 0; i < 10; i++) {
				printf("%c", ch[i]);
			}

			printf("���α׷��� �����ϰڽ��ϱ�?(Y/N)");
			scanf("%c", &p);
			p = getch();

			if (p == 'Y' || p == 'y')
				continue;
			else if (p == 'N' || p == 'n')
				break;
		}

	return 0;
}