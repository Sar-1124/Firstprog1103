#include <stdio.h>

int main() {
    int a, b, input; // 변수 선언: a는 행을 나타내는 변수, b는 해당 행에서의 별표 개수를 나타내는 변수, input은 사용자로부터 입력 받은 삼각형의 높이

    // 사용자로부터 삼각형의 높이를 입력 받음
    printf("몇 줄 짜리 삼각형? : ");
    scanf_s("%d", &input);

    // 삼각형 출력을 위한 이중 반복문
    for (a = 1; a <= input; a++) { // a를 이용해 행을 표현
        printf("a = %d :  ", a); // 현재 행 번호 출력
        for (b = 1; b <= a; b++) // 현재 행에서의 별표 개수를 나타내는 b 변수를 이용하여 별표를 출력
            printf("*"); // 별표 출력
        printf("\n"); // 한 행 출력 후 줄 바꿈
    }

    return 0; // 프로그램 종료
}