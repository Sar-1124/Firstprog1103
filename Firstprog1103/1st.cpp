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
설명
8행: hap() 함수를 정의한다.
10행: main() 함수가 시작되는 부분이다.
11행: 두 개의 정수 변수 a와 b를 선언하고 초기화한다.
12행: a, b, a+b 값을 출력한다.
16행: hap() 함수를 정의한다.
18행: 두 개의 정수를 받아 더한 값을 반환한다.
*/

