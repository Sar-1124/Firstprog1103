/* fscanf 이용하기 */
#include <stdio.h>
int main() {
	FILE* fp = fopen("some_data.txt", "r");
	char data[100];
	if (fp == NULL) {
		printf("파일 열기 오류! \n");
		return 0;
	}
	printf("---- 입력 받은 단어들 ---- \n");
	while (fscanf(fp, "%s", data) != EOF) {
		printf("%s \n", data);
	}
	fclose(fp);
}

/* 파일에서 'this' 를 'that' 으로 바꾸기*/
#include <stdio.h>
#include <string.h>
int main() {
	FILE* fp = fopen("some_data.txt", "r+");
	char data[100];
	if (fp == NULL) {
		printf("파일 열기 오류! \n");
		return 0;
	}
	while (fscanf(fp, "%s", data) != EOF) {
		if (strcmp(data, "this") == 0) {
			fseek(fp, -(long)strlen("this"), SEEK_CUR);
			fputs("that", fp);
			fflush(fp);
		}
	}
	fclose(fp);
}