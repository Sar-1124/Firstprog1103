#include "Myadd_one.h"

int main() {
	int a = 1;
	printf("Before : %d \n", a);
	add_one(&a);
	printf("After : %d \n", a);
}