#include <stdio.h>
int hap(int* a, int* b);
	int main() 
{
		int p = 10;
		int q = 20;
		printf("hap = %d\n", hap(&p,  &q));
	
		return 0;
}
int hap(int* p, int* q) {
	return *p + *q;
}