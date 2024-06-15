#include <stdio.h>
int main() {
	/* 현재 fp 에 abcdef 가 들어있는 상태*/
	FILE* fp = fopen("a.txt", "r");
	fgetc(fp);
	fgetc(fp);
	fgetc(fp);
	fgetc(fp);
	/* d 까지 입력받았으니 파일 위치지정자는 이제 e 를 가리키고 있다 */
	fseek(fp, 0, SEEK_SET);
	printf("다시 파일 처음에서 입력 받는다면 : %c \n", fgetc(fp));
	fclose(fp);
	return 0;
}

/*
출력 스트림도 마찬가지
#include <stdio.h>
int main() {
	FILE* fp = fopen("a.txt", "w");
	fputs("Psi is an excellent C programmer", fp);
	fseek(fp, 0, SEEK_SET);
	fputs("is Psi", fp);
	fclose(fp);
	return 0;
}*/

/*
//파일에서 문자를 하나씩 입력 받는다
#include <stdio.h>
int main() {
	FILE* fp = fopen("some_data.txt", "r");
	char c;
	if (fp == NULL) {
		printf("file open error ! \n");
		return 0;
	}
	while ((c = fgetc(fp)) != EOF) {
		printf("%c", c);
	}
}
*/