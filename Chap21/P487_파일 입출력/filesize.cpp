#include <stdio.h>
int main() {
	FILE* fp = fopen("a.txt", "r");
	int size = 0;
	while (fgetc(fp) != EOF) {
		size++;
	}
	printf("�� ������ ũ��� : %d bytes \n", size);
	fclose(fp);
	return 0;
}