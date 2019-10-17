#include <stdio.h>

void add(int a, int b) {
	printf("result : %d\n", a+b);
}

void sub(int a, int b) {
	printf("result : %d\n", a - b);
}

void mul(int a, int b) {
	printf("result : %d\n", a * b);
}

void div(int a, int b) {
	printf("result : %d\n", a / b);
}

void CelToFah(float a) {
	//¼·¾¾¸¦ È­¾¾·Î º¯È¯ÇÏ´Â °ø½Ä
	printf("%f\n", (a * 1.8) + 32);
}

void FahToCel(float b) {
	//È­¾¾¸¦ ¼·¾¾·Î º¯È¯ÇÏ´Â °ø½Ä
	printf("%f\n", (b - 32) / 1.8);
}

int biggest(int a, int b, int c) {
	int result;
	if (a > b && a > c)
		result = a;
	else if (a < b && b > c)
		result = b;
	else if (a < c && b < c)
		result = c;
	return result;
}

int smallest(int a, int b, int c) {
	int result;
	if (a > c&& b > c)
		result = c;
	else if (a < b && a < c)
		result = a;
	else if (a > b&& b < c)
		result = b;
	return result;
}

int main(){

	CelToFah(2);
	FahToCel(36);

	int big = biggest(10,5,4);
	int small = smallest(10, 40, 20);

	printf("%d\n", big);
	printf("%d\n", small);

	return 0;
}