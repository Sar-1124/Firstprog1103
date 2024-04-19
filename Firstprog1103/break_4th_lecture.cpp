/* break! */
#include <stdio.h>
int main() {
	int i;
	for (i=0; i<100; i++){
		if (i % 5 == 0)
			continue;
		printf("%d", 1);
	
	/*int usranswer;
	printf("컴퓨터가 생각한 숫자를 맞추어 보세요! \n");
	for (;;) {
		scanf("%d", &usranswer);
		if (usranswer == 3) {
			printf("맞추셨군요! \n");
			break;
		}
		else {
			printf("틀렸어요! \n");
		}*/
	}
	return 0;
}

/*
설명
1행: 무한 루프를 사용하여 사용자로부터 값을 입력받아 컴퓨터가 생각한 숫자를 맞추는 프로그램을 작성한다.
2행: 사용자로부터 입력받은 값을 저장할 변수 usranswer를 선언한다.
3행: 사용자에게 값을 입력받으라는 메시지를 출력한다.
4행: 무한 루프를 사용한다.
5행: 사용자로부터 값을 입력받는다.
6행: 사용자가 입력한 값과 컴퓨터가 생각한 숫자 3을 비교한다.
7행: 사용자가 입력한 값이 3이면 정답 메시지를 출력하고 무한 루프를 탈출한다.
8행: 그렇지 않으면 오답 메시지를 출력한다.
*/
// Compare this snippet from Firstprog1103/4th.cpp:
// #include <stdio.h>
// 
// int main()
// {
// 	int arr[5] = { 1, 2, 3, 4, 5 };
// 	int* parr = arr;
// 	int i;
// 
// 	for (i = 0; i < 5; i++) {
// 		printf("arr[%d] = %d, *(parr + %d) = %d\n", i, arr[i], i, *(parr + i));
// 	}
// 	return 0;
// }
// 
// /*
// 설명
// 1행: 포인터를 사용하여 배열의 각 원소에 접근하는 방법을 설명한다.
// 8행: 배열을 선언하고 초기화한다.
// 9행: 배열의 시작 주소를 가리킬 포인터 parr을 선언한다.
// 10행: 반복문을 사용하여 배열의 각 원소에 접근한다.
// 11행: 배열의 i번째 원소의 값을 출력한다.
//