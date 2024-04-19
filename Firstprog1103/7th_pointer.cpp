#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void hap(int* , int* );

int main() {
	int a, b;
	printf("두개의 정수를 입력하세요 : ");
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

// ㄴ실행결과
// 두개의 정수를 입력하세요 : 10 20
// before: 10 20
// func: 20 10
// after: 20 10
// ㄴ함수의 인자로 포인터를 전달하면 함수 내부에서 값을 변경하면 원래 값도 변경된다.
// ㄴ함수 내부에서 변경된 값은 함수 외부에서도 유효하다.
// ㄴ따라서 함수의 인자로 포인터를 전달하면 함수 내부에서 값을 변경하면 원래 값도 변경된다.
// ㄴ함수의 인자로 포인터를 전달하면 함수 내부에서 값을 변경하면 원래 값도 변경된다.
// ㄴ함수 내부에서 변경된 값은 함수 외부에서도 유효하다.
// ㄴ따라서 함수의 인자로 포인터를 전달하면 함수 내부에서 값을 변경하면 원래 값도 변경된다.
// ㄴ함수의 인자로 포인터를 전달하면 함수 내부에서 값을 변경하면 원래 값도 변경된다.
// ㄴ함수 내부에서 변경된 값은 함수 외부에서도 유효하다.
// ㄴ따라서 함수의 인자로 포인터를 전달하면 함수 내부에서 값을 변경하면 원래 값도 변경된다.
// ㄴ함수의 인자로 포인터를 전달하면 함수 내부에서 값을 변경하면 원래 값도 변경된다.
// ㄴ함수 내부에서 변경된 값은 함수 외부에서도 유효하다.
// ㄴ따라서 함수의 인자로 포인터를 전달하면 함수 내부에서 값을 변경하면 원래 값도 변경된다.
// ㄴ함수의 인자로 포인터를 전달하면 함수 내부에서 값을 변경하면 원래 값도 변경된다.