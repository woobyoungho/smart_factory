#pragma once
int my_strlen(char str[]) {
	int length = 0;
	
	//wbh
	for (int i = 0; i < 100000; i++) {
		if (str[i] != 0) {
			length++;
		}
		else
			break;
	}

	return length;
}
int my_atoi(char str[]) {
	return 0;
}
