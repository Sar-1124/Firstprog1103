/* a.txt �� ������ ����Ѵ�. */
#include <stdio.h>
int main() {
	FILE* fp;
	fp = fopen("a.txt", "w");
	if (fp == NULL) {
		printf("Write Error!!\n");
		return 0;
	}
	fputs("�ȳ��ϼ��� ���� �������۸ۤ����Դϴ�. \n", fp);
	fclose(fp);
	return 0;
}