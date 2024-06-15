/* a.txt 에 내용을 기록한다. */
#include <stdio.h>
int main() {
	FILE* fp;
	fp = fopen("a.txt", "w");
	if (fp == NULL) {
		printf("Write Error!!\n");
		return 0;
	}
	fputs("안녕하세요 저는 엄엄ㅇ멍멍ㅁ엄입니다. \n", fp);
	fclose(fp);
	return 0;
}