#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void hap(int* , int* );

int main() {
	int a, b;
	printf("�ΰ��� ������ �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);
	printf("before: %d %d \n", a, b);
	hap(&a, &b);
	printf("after: %d %d \n", a, b);
}
void hap(int* d, int* e) {

	int temp;
	temp = *d;
	*d = *e;
	*e = temp;

	printf("func: %d %d\n", *d, *e);
}