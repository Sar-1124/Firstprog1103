/* fopen �� "r+" ���� �̿��غ��� */
//#include <stdio.h>
//int main() {
//	FILE* fp = fopen("some_data.txt", "r+");
//	char data[100];
//	fgets(data, 100, fp);
//	printf("���� ���Ͽ� �ִ� ���� : %s \n", data);
//	fseek(fp, 5, SEEK_SET);
//	fputs("is nothing on this file", fp);
//	fclose(fp);
//}

/* Ư���� ������ �Է� �޾Ƽ� �ҹ��ڸ� �빮�ڷ�, �빮�ڸ� �ҹ��ڷ� �ٲٴ�
* ���α׷�*/
//#include <stdio.h>
//int main() {
//	FILE* fp = fopen("some_data.txt", "r+");
//	char c;
//	if (fp == NULL) {
//		printf("���� ���⸦ �����Ͽ����ϴ�! \n");
//		return 0;
//	}
//	while ((c = fgetc(fp)) != EOF) {
//		/* c �� �빮���� ��� */
//		if (65 <= c && c <= 90) {
//			/* �� ĭ �ڷ� ����*/
//			fseek(fp, -1, SEEK_CUR);
//			/* �ҹ��ڷ� �ٲ� c �� ����Ѵ�*/
//			fputc(c + 32, fp);
//			/*
//			���� - �б� ��� ��ȯ�� ���ؼ��� ������
//			fseek �Լ��� ���� ���� ��ġ ������ ���� �Լ�����
//			ȣ���ؾ� �Ѵ�.
//			*/
//			fseek(fp, 0, SEEK_CUR);
//		}
//		/* c �� �ҹ����� ���*/
//		else if (97 <= c && c <= 122) {
//			fseek(fp, -1, SEEK_CUR);
//			fputc(c - 32, fp);
//			fseek(fp, 0, SEEK_CUR);
//		}
//	}
//	fclose(fp);
//}

/* fopen �� 'append' ��� ���*/
#include <stdio.h>
int main() {
	FILE* fp = fopen("some_data.txt", "a");
	char c;
	if (fp == NULL) {
		printf("���� ���⸦ �����Ͽ����ϴ�! \n");
		return 0;
	}
	/* �Ʒ� ������ ���� �ڿ� ���ٿ�����.*/
	fputs("IS ADDED HAHAHAHA", fp);
	fclose(fp);
}