#include <stdio.h>
int main() {
	FILE* fp = fopen("a.txt", "r");
	int size = 0;
	while (fgetc(fp) != EOF) {
		size++;
	}
	printf("이 파일의 크기는 : %d bytes \n", size);
	fclose(fp);
	return 0;
}