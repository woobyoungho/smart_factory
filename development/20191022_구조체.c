#include <stdio.h>
#include "my_string.h"

struct person {
	int age;
	double height;
	double weight;
};

typedef struct person Person;

int main() {
	/*
	int age;
	char name[100];
	char address[1000];
	
	printf("나이 : ");
	scanf("%d", &age);
	
	printf("\n이름 : ");
	scanf("%s", name);

	printf("\n주소 : ");
	scanf("%s", address);
	
	printf("\n<나이 : %d>\n", age);
	printf("<이름 : %s>\n", name);
	printf("<주소 : %s>\n", address);
	*/


	/*
	char arr[] = "Good bye";
	//원래 배열의 모양은
	// { 'G', 'o', 'o', 'd', '0' };
	int size = sizeof(arr);
	//원래 배열은 0을 포함하고 있어 good면 -> '5' 출력
	int length = my_strlen(arr);
	//문자열 길이를 알려주는 것  good면 -> '4'

	char num_str[] = "1234";
	int num = my_atoi(num_str) + 5;
	//문자열을 숫자로 변환시켜주는 함수 atoi
	//숫자만 가능

	printf("size : %d\n", size);
	printf("length : %d\n", length);
	printf("num : %d\n", num);
	*/


	/*
	char name1[5] = "abcd";
	char* name2 = "efgjj";

	name1[2] = 'Z';

	printf("%s\n", name1);
	printf("%s\n", name2);

	int a = 1;
	int* b = &a;
	char c = 1;
	char* d = &c;
	//주소 길이는 가변

	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(d));
	*/

		int person[] = { 44, 177.7, 60.6 };
	Person person2 = {44, 177.7, 60.6};

	person[0] = 33;
	person2.age = 33;

	printf("%d, %d, %d\n", person[0], person[1], person[2]);
	//인덱스를 사용하는 것

	printf("%d, %.2f, %.2f, %s\n", person2.age, person2.height, person2.weight, "WBH");
	//구조체는 ' . ' 사용
	//배열로 하기에는 불편함이 있어서 구조체를 사용
	
	return 0;
}
