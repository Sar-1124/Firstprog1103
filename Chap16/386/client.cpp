#include <stdio.h>

char compare(char* str1, char* str2);

int main() {
	char str1[20];
	char str2[20];

	scanf_s("%s", str1, sizeof(str1));
	scanf_s("%s", str2, sizeof(str2));

	if (compare(str1, str2)) {
		printf("%s �� %s �� ���� �����Դϴ�. \n", str1, str2);
	}

	else {
		printf("%s �� %s �� �ٸ� �����Դϴ�. \n", str1, str2);
	}

	return 0;
}

char compare(char* str1, char* str2) {
	while (*str1) {
		if (*str1 != *str2) {
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str2 == '\0') return 1;
	return 0;
}