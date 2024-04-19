#pragma warning(disable:4996)
#include<stdio.h>

long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return(n * factorial(n - 1));
}

int main()
{
    int number;
    long fact;
    printf("Enter a number: ");
    scanf("%d", &number);

    fact = factorial(number);
    printf("Factorial of %d is %ld\n", number, fact);
    return 0;
}

// 함수 factorial()은 재귀적으로 정의되어 있다. 이 함수는 입력된 수의 팩토리얼 값을 반환한다. 
// 0의 팩토리얼은 1이므로, n이 0이면 1을 반환하고, 그렇지 않으면 n * factorial(n - 1)을 반환한다.
// main() 함수에서 사용자로부터 값을 입력받아 factorial() 함수를 호출하고, 그 반환 값을 출력한다.
// 예를 들어, 5를 입력하면 5! = 5 * 4 * 3 * 2 * 1 = 120이 출력된다.
// 0부터 20까지의 팩토리얼 값을 구하는 프로그램을 작성하고 실행하라. 20 이상의 수는 계산하는데 시간이 오래 걸린다.
// ㄴ
// ㄴ#include <stdio.h>
// 
// long factorial(int n)
// {
//     if (n == 0)
//         return 1;
//     else
//         return(n * factorial(n - 1));
// }
// 
// int main()
// {
//     int number;
//     long fact;
//     printf("Enter a number: ");
//     scanf("%d", &number);
// 
//     fact = factorial(number);
//     printf("Factorial of %d is %ld\n", number, fact);
//     return 0;
// }
// 
// /*
// 설명
// 1행: 팩토리얼 값을 계산하는 함수 factorial()을 정의한다.
// 3행: n이 0이면 1을 반환한다.
// 4행: 그렇지 않으면 n * factorial(n - 1)을 반환한다.
// 6행: 사용자로부터 값을 입력받을 변수 number를 선언한다.
// 7행: 팩토리얼 값을 저장할 변수 fact를 선언한다.
// 8행: 사용자로부터 값을 입력받는다.
// 10행: factorial() 함수를 호출