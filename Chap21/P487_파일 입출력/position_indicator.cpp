#include <stdio.h>
int main() {
	/* ���� fp �� abcdef �� ����ִ� ����*/
	FILE* fp = fopen("a.txt", "r");
	fgetc(fp);
	fgetc(fp);
	fgetc(fp);
	fgetc(fp);
	/* d ���� �Է¹޾����� ���� ��ġ�����ڴ� ���� e �� ����Ű�� �ִ� */
	fseek(fp, 0, SEEK_SET);
	printf("�ٽ� ���� ó������ �Է� �޴´ٸ� : %c \n", fgetc(fp));
	fclose(fp);
	return 0;
}

/*
��� ��Ʈ���� ��������
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
//���Ͽ��� ���ڸ� �ϳ��� �Է� �޴´�
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