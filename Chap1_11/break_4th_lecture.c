/* break! */
#include <stdio.h>
int main() {
	int i;
	for (i=0; i<100; i++){
		if (i % 5 == 0)
			continue;
		printf("%d", 1);
	
	/*int usranswer;
	printf("��ǻ�Ͱ� ������ ���ڸ� ���߾� ������! \n");
	for (;;) {
		scanf("%d", &usranswer);
		if (usranswer == 3) {
			printf("���߼̱���! \n");
			break;
		}
		else {
			printf("Ʋ�Ⱦ��! \n");
		}*/
	}
	return 0;
}

/*
����
1��: ���� ������ ����Ͽ� ����ڷκ��� ���� �Է¹޾� ��ǻ�Ͱ� ������ ���ڸ� ���ߴ� ���α׷��� �ۼ��Ѵ�.
2��: ����ڷκ��� �Է¹��� ���� ������ ���� usranswer�� �����Ѵ�.
3��: ����ڿ��� ���� �Է¹������ �޽����� ����Ѵ�.
4��: ���� ������ ����Ѵ�.
5��: ����ڷκ��� ���� �Է¹޴´�.
6��: ����ڰ� �Է��� ���� ��ǻ�Ͱ� ������ ���� 3�� ���Ѵ�.
7��: ����ڰ� �Է��� ���� 3�̸� ���� �޽����� ����ϰ� ���� ������ Ż���Ѵ�.
8��: �׷��� ������ ���� �޽����� ����Ѵ�.
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
// ����
// 1��: �����͸� ����Ͽ� �迭�� �� ���ҿ� �����ϴ� ����� �����Ѵ�.
// 8��: �迭�� �����ϰ� �ʱ�ȭ�Ѵ�.
// 9��: �迭�� ���� �ּҸ� ����ų ������ parr�� �����Ѵ�.
// 10��: �ݺ����� ����Ͽ� �迭�� �� ���ҿ� �����Ѵ�.
// 11��: �迭�� i��° ������ ���� ����Ѵ�.
//