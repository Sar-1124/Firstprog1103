#include <stdio.h>
int hap(int& a, int& b);
int main()
{
	int a = 10;
	int b = 20;
	printf("hap = %d\n", hap(a, b));

	return 0;
}
int hap(int& p, int& q) {
	return p + q;
}