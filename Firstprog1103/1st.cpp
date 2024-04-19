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
