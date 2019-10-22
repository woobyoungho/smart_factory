#include <stdio.h>

//자료형의 확장과 축소 복습

int a = 111;
int b = 222;

int main() {

	int c = 10;
	int d = 20;
	int* e = 30;
	//int* 라는 자료형.
	int* f = &a;
	
	f = &c;
	//주소값을 넣음
	
	
	*f = 90;
	//값을 넣음

	printf("a %d : %d\n", &a, a);
	printf("b %d : %d\n", &b, b);
	printf("c %d : %d\n", &c, c);
	printf("d %d : %d\n", &d, d);
	printf("e %d : %d\n", &e, e);
	printf("f %d : %d : %d\n", &f, f, *f);
	return 0;
}
