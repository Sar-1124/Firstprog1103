#include <stdio.h>

int hap(int, int);

void main()
{
	int a = 10;
		int b = 20;
		printf("a = %d b = %d hap is %d\n", a, b, hap(a, b));
	// printf("hap is %d\n", hap(a, b));
}
int hap(int a,  int b)
{
	return a + b;
}
/*
����
8��: hap() �Լ��� �����Ѵ�.
10��: main() �Լ��� ���۵Ǵ� �κ��̴�.
11��: �� ���� ���� ���� a�� b�� �����ϰ� �ʱ�ȭ�Ѵ�.
12��: a, b, a+b ���� ����Ѵ�.
16��: hap() �Լ��� �����Ѵ�.
18��: �� ���� ������ �޾� ���� ���� ��ȯ�Ѵ�.
*/

