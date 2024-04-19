#include <stdio.h>
void hap(int d, int e);

int main() {
	int a = 10;
	int b = 20;
	printf("before: %d %d \n", a, b);
	hap(a, b);
	printf("after: %d %d \n", a, b);
	return 0;
}
void hap(int d, int e) {
	int temp;
	temp = d;
	d = e;
	e = temp;

	printf("func: %d %d \n", d, e);
}