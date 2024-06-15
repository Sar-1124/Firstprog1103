/* fscanf �̿��ϱ� */
#include <stdio.h>
int main() {
	FILE* fp = fopen("some_data.txt", "r");
	char data[100];
	if (fp == NULL) {
		printf("���� ���� ����! \n");
		return 0;
	}
	printf("---- �Է� ���� �ܾ�� ---- \n");
	while (fscanf(fp, "%s", data) != EOF) {
		printf("%s \n", data);
	}
	fclose(fp);
}

/* ���Ͽ��� 'this' �� 'that' ���� �ٲٱ�*/
#include <stdio.h>
#include <string.h>
int main() {
	FILE* fp = fopen("some_data.txt", "r+");
	char data[100];
	if (fp == NULL) {
		printf("���� ���� ����! \n");
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