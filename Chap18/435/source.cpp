//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char** argv) {
//
//	int SizeOfArray;
//	int* arr;
//
//	printf("����� ���� �迭�� ������ �� : ");
//
//	scanf("%d", &SizeOfArray);
//
//	arr = (int*)malloc(sizeof(int) * SizeOfArray);
//
//	// int arr[SizeOfArray] �� ������ �۾��� �� ũ���� �迭 ����
//	free(arr);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main(int argc, char** argv) {
//	
//	int student; // �Է� �ް��� �ϴ� �л� ��
//	int i, input;
//	int* score; // �л� ���� �������� ����
//	int sum = 0; // ����
//
//	printf("�л��� ����? : ");
//
//	scanf("%d", &student);
//
//	score = (int*)malloc(student * sizeof(int));
//	
//	for (i = 0; i < student; i++) {
//		printf("�л� %d �� ���� : ", i);
//		scanf("%d", &input);
//		score[i] = input;
//	}
//	
//	for (i = 0; i < student; i++) {
//		sum += score[i];
//	}
//	
//	printf("��ü �л� ��� ���� : %d \n", sum / student);
//	free(score);
//	
//	return 0;
//}

///* 2 ���� �迭�� ���� �Ҵ� */
//#include <stdio.h>
//#include <stdlib.h>
//int main(int argc, char** argv) {
//	int i;
//	int x, y;
//	int** arr; // �츮�� arr[x][y] �� ���� ���̴�.
//
//	printf("arr[x][y] �� ���� ���Դϴ�.\n");
//
//	scanf("%d %d", &x, &y);
//
//	arr = (int**)malloc(sizeof(int*) * x);
//
//	for (i = 0; i < x; i++) {
//		arr[i] = (int*)malloc(sizeof(int) * y);
//	}
//
//	printf("���� �Ϸ�! \n");
//
//	for (i = 0; i < x; i++) {
//		free(arr[i]);
//	}
//
//	free(arr);
//
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
typedef struct Something {
	int a, b;
}ST;
int main() {
	ST* arr;
	int size, i;

	printf("���Ͻô� ����ü �迭�� ũ�� : ");

	scanf("%d", &size);

	arr = (struct Something*)malloc(sizeof(struct Something) * size);
	
	for (i = 0; i < size; i++) {
		printf("arr[%d].a : ", i);
		scanf("%d", &arr[i].a);
		printf("arr[%d].b : ", i);
		scanf("%d", &arr[i].b);
	}
	
	for (i = 0; i < size; i++) {
		printf("arr[%d].a : %d , arr[%d].b : %d \n", i, arr[i].a, i, arr[i].b);
	}
	
	free(arr);

	return 0;
}