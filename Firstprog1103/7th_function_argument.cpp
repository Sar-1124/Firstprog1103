#pragma warning(disable:4996)
#include <stdio.h>
int add_number(int* parr);
int main() {
	int arr[3];
	int i;
	/* 사용자로 부터 3 개의 원소를 입력 받는다. */
	for (i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
	}
	add_number(arr);
	printf("배열의 각 원소 : %d, %d, %d", arr[0], arr[1], arr[2]);
	return 0;
} 
int add_number(int* parr) {
	int i; 
	for (i = 0; i < 3; i++) {
		parr[i]++;
	}
	return 0;
}
// 함수의 인자로 배열을 전달하고, 함수 내에서 배열의 각 원소를 1 씩 증가시킨다.
/*설명
1행: 7번째 예제는 함수에 배열을 전달하는 방법을 설명한다.
8행: 배열을 전달 받는 함수 add_number()를 정의한다.
10행: 사용자로부터 3개의 원소를 입력받을 배열을 선언한다.
11행: 반복문을 사용하여 사용자로부터 3개의 값을 입력받는다.
12행: add_number() 함수를 호출하면서 배열을 인자로 전달한다.
14행: add_number() 함수가 종료되면 배열의 각 원소를 출력한다.
16행: add_number() 함수를 정의한다.
18행: 반복문을 사용하여 배열의 각 원소에 1을 더한다.*/