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

// �Լ� factorial()�� ��������� ���ǵǾ� �ִ�. �� �Լ��� �Էµ� ���� ���丮�� ���� ��ȯ�Ѵ�. 
// 0�� ���丮���� 1�̹Ƿ�, n�� 0�̸� 1�� ��ȯ�ϰ�, �׷��� ������ n * factorial(n - 1)�� ��ȯ�Ѵ�.
// main() �Լ����� ����ڷκ��� ���� �Է¹޾� factorial() �Լ��� ȣ���ϰ�, �� ��ȯ ���� ����Ѵ�.
// ���� ���, 5�� �Է��ϸ� 5! = 5 * 4 * 3 * 2 * 1 = 120�� ��µȴ�.
// 0���� 20������ ���丮�� ���� ���ϴ� ���α׷��� �ۼ��ϰ� �����϶�. 20 �̻��� ���� ����ϴµ� �ð��� ���� �ɸ���.
// ��
// ��#include <stdio.h>
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
// ����
// 1��: ���丮�� ���� ����ϴ� �Լ� factorial()�� �����Ѵ�.
// 3��: n�� 0�̸� 1�� ��ȯ�Ѵ�.
// 4��: �׷��� ������ n * factorial(n - 1)�� ��ȯ�Ѵ�.
// 6��: ����ڷκ��� ���� �Է¹��� ���� number�� �����Ѵ�.
// 7��: ���丮�� ���� ������ ���� fact�� �����Ѵ�.
// 8��: ����ڷκ��� ���� �Է¹޴´�.
// 10��: factorial() �Լ��� ȣ��