#include <stdio.h>

int main() {
	int arr[5];
	int max, min;
	int sum =0;

	printf("���� �Է� : ");
	for (int i = 0; i < 5; i++) {
		//���� 5�� �Է�. arr[0]~ arr[4]���� ����
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	min = arr[0];

	for (int i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}

	printf("%d\n", max);
	printf("%d\n", min);
	printf("%d\n", sum);

	return 0;
}