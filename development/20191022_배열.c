#include <stdio.h>


void P1() {

	//문제 1
	//다음 정수들(95 100 88 65 76 89 58 93 77 99)을 배열에 저장한 후에 짝수만 출력하는 프로그램을 작성하시오.
	//<실행결과>
	//100 88 76 89 58

	int arr1[10] = { 95, 100, 88, 65, 76, 89, 58, 93, 77, 99 };

	for (int i = 0; i < sizeof(arr1) / sizeof(int); i++) {
		if (arr1[i] % 2 == 0) {
			printf("%d ", arr1[i]);
		}
	}
}

void P2() {

	//문제 2
	//다음 정수들(95 100 88 65 76 89 58 93 77 99)을 배열에 저장한 후 짝수 번째 입력된 값의 합과 홀수 번째 입력된 값의 평균을 출력하는 프로그램을 작성하시오.
	//평균은 정수자리까지만 출력하세요.
	//<실행결과>
	//sum : 446
	//avg : 78

	int arr2[10] = { 95, 100, 88, 65, 76, 89, 58, 93, 77, 99 };
	int sum1 = 0;
	int sum2 = 0;
	int avg;
	int i = 0;
	int j = 1;
	int a = sizeof(arr2) / sizeof(int);

	while (j < a) {
		if (j < a) {
			sum2 += arr2[j];
			j += 2;
		}
	}

	while (i < a) {
		if (i < a) {
			sum1 += arr2[i];
			i += 2;
		}
	}
	avg = sum1 / 5;
	printf("짝수 번째 입력된 값의 합 : %d\n", sum2);
	printf("홀수 번째 입력된 값의 평균 : %d\n", avg);
}

void P3() {

	//문제 3
	//100 개의 정수를 저장할 수 있는 배열을 선언하고 정수를 차례로 입력받다가
	//0 이 입력되면 0 을 제외하고 그 때까지 입력된 정수를 가장 나중에 입력된 정수부터
	//차례대로 출력하는 프로그램을 작성하시오.
	//< 실행결과>
	//  3
	//	5
	//	10
	//	55
	//	0
	//	55 10 5 3

	int arr3[100];
	int a = sizeof(arr3) / sizeof(int);

	for (int i = 0; i < a; i++) {
		scanf("%d", &arr3[i]);
		if (arr3[i] == 0) {
			for (i = i - 1; i >= 0; i--) {
				printf("%d ", arr3[i]);
			}
			break;
		}
	}
}

void P4() {

	//문제 4
	//1반부터 6반까지의 평균점수를 저장한 후 두 반의 반 번호를 입력받아
	//두 반 평균점수의 합을 출력하는 프로그램을 작성하시오.
	//반별 평균점수는 초기값으로 1반부터 차례로 85.6 79.5 83.1 80.0 78.2 75.0으로 초기화하고
	//출력은 정수자리까지만 출력하세요.

	//	< 실행결과>
	//	1 3
	//	168

	float arr4[6] = { 85.6, 79.5, 83.1, 80.0, 78.2, 75.0 };
	int sum = 0;
	int a = sizeof(arr4) / sizeof(int);
	int num;

	//arr4[0] == 85.6
	//arr4[1] == 79.5
	int num2;
	printf("입력할 숫자 갯수 : ");
	scanf("%d", &num2);

	for (int i = 0; i < num2; i++) {
		printf("%d번째 숫자 : ", i+1);
		scanf("%d", &num);
		//1 2 3 4 5 6 까지만 가능
		if (num <= 6 && num > 0) {
			sum += arr4[num - 1];
		}
		else {
			printf("1이상 6이하 값만 입력가능합니다.\n");
			break;
		}
	}
	if (num <= 6 && num > 0)
		printf("%d\n", sum);
	else
		sum = 0;


}

void P5() {
	//문제5
	//문자열을 입력 받아서, 아스키코드로 10진수와 16진수로 변환하는 프로그램을 작성해 보자.
	//(단, 입력 받는 단어의 최대 길이는 100이다.)
	//	ABCDE
	//	65(0x41) 66(0x42) 67(0x43) 68(0x44) 69(0x45)

	char ch[100];
	int num;

	printf("입력받을 단어 길이 : ");
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		printf("%d번째 단어 : ", i + 1);
		scanf("%s", &ch[i]);
		printf("\n%d(0x%X)\n\n", ch[i], ch[i]);
	}

}

void P6() {
	//문제 6
	//문자열을 입력 받아서, 홀수 번째 문자만 출력해 보자.(단, 입력 받는 단어의 최대 길이는 100이다.)
	//<실행결과>
	//	ABCDE
	//	ACE

	char ch[100];
	int a = sizeof(ch);
	int num;
	int i = 0;

	printf("문자열 개수 입력(숫자) : ");
	scanf("%d", &num);
	
	printf("문자열 입력(영문) : ");
	scanf("%s", &ch);

	while (1) {
		if (i < num) {
			printf("[ %c ] ", ch[i]);
			i += 2;
		}
		else
			break;
	}
}
int main() {
	
	//P1();
	//P2();
	//P3();
	//P4();
	//P5();
	P6();
	return 0;
}