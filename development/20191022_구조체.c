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
	
	printf("���� : ");
	scanf("%d", &age);
	
	printf("\n�̸� : ");
	scanf("%s", name);

	printf("\n�ּ� : ");
	scanf("%s", address);
	
	printf("\n<���� : %d>\n", age);
	printf("<�̸� : %s>\n", name);
	printf("<�ּ� : %s>\n", address);
	*/


	/*
	char arr[] = "Good bye";
	//���� �迭�� �����
	// { 'G', 'o', 'o', 'd', '0' };
	int size = sizeof(arr);
	//���� �迭�� 0�� �����ϰ� �־� good�� -> '5' ���
	int length = my_strlen(arr);
	//���ڿ� ���̸� �˷��ִ� ��  good�� -> '4'

	char num_str[] = "1234";
	int num = my_atoi(num_str) + 5;
	//���ڿ��� ���ڷ� ��ȯ�����ִ� �Լ� atoi
	//���ڸ� ����

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
	//�ּ� ���̴� ����

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
	//�ε����� ����ϴ� ��

	printf("%d, %.2f, %.2f, %s\n", person2.age, person2.height, person2.weight, "WBH");
	//����ü�� ' . ' ���
	//�迭�� �ϱ⿡�� �������� �־ ����ü�� ���
	
	return 0;
}
