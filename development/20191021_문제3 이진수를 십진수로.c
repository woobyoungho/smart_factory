#include <stdio.h>

int main() {
	int decimal = 0;
	int binary[4] = { 1,1,0,1 };
	/*
	if (binary[0] == 1)
		decimal += 8;
	else
		decimal += 0;

	if (binary[1] == 1)
		decimal += 4;
	else
		decimal += 0;

	if (binary[2] == 1)
		decimal += 2;
	else
		decimal += 0;

	if (binary[3] == 1)
		decimal += 1;
	else
		decimal += 0;
		*/

	/*
	//shift ���� �̿��ؼ� 2�� ���� ���� �� �� �ִ�.
	decimal += binary[0] * (1 << 3);
	decimal += binary[1] * (1 << 2);
	decimal += binary[2] * (1 << 1);
	decimal += binary[3] * (1 << 0);
	*/


	int size = sizeof(binary) / sizeof(int);
	// char ���� �޸� int���� 4byte�̱� ������ �����⸦ ���ش�.
	printf("%d\n", size);


	for (int i = 0; i < size; i++) {
		decimal += binary[i] * (1 << ((size - 1) - i));
	}

	printf("%d\n", decimal);


	return 0;
}