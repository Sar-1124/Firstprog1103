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

/*
설명
1행: 7번째 예제는 함수의 인자로 참조를 사용하는 방법을 설명한다.
8행: hap() 함수를 정의한다.
10행: main() 함수가 시작되는 부분이다.
11행: 두 개의 정수 변수 a와 b를 선언하고 초기화한다.
12행: hap() 함수를 호출하면서 a와 b를 인자로 전달한다.
14행: hap() 함수가 반환하는 값을 출력한다.
16행: hap() 함수를 정의한다.
18행: 두 개의 정수를 받아 더한 값을 반환한다.
*/