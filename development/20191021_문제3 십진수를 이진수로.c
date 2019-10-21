#include <stdio.h>

int main() {
	int binary[4] = { 0, };
	int size = sizeof(binary) / sizeof(int);
	printf("%d\n", size);
	
	int decimal;

	scanf("%d", &decimal);

	// ex) 15
	if (decimal >= 16) {
		printf("16이상의 숫자는 찾을 수 없습니다.");
	}
	else {
		for (int i = 0; i < size; i++) {

			/*
			if (decimal >= 8 && decimal < 16) {
				binary[0] += 1;
				decimal -= 8;
			}
			else if (decimal >= 4 && decimal < 8) {
				binary[1] += 1;
				decimal -= 4;
			}
			else if (decimal >= 2 && decimal < 4) {
				binary[2] += 1;
				decimal -= 2;
			}
			else if (decimal >= 1 && decimal < 2) {
				binary[3] += 1;
				decimal -= 1;
			}
			*/

			if (decimal >= (1 << (size - (i + 1))) && decimal < (1 << (size - i))) {
				binary[i] += 1;
				decimal -= (1 << (size - (i + 1)));
			}
		}
		for (int i = 0; i < size; i++) {
			printf("%d ", binary[i]);
		}
	}

	return 0;
}