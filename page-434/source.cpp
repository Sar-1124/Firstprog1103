//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char** argv) {
//
//	int SizeOfArray;
//	int* arr;
//
//	printf("만들고 싶은 배열의 원소의 수 : ");
//
//	scanf("%d", &SizeOfArray);
//
//	arr = (int*)malloc(sizeof(int) * SizeOfArray);
//
//	// int arr[SizeOfArray] 와 동일한 작업을 한 크기의 배열 생성
//	free(arr);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main(int argc, char** argv) {
//	
//	int student; // 입력 받고자 하는 학생 수
//	int i, input;
//	int* score; // 학생 들의 수학점수 변수
//	int sum = 0; // 총점
//
//	printf("학생의 수는? : ");
//
//	scanf("%d", &student);
//
//	score = (int*)malloc(student * sizeof(int));
//	
//	for (i = 0; i < student; i++) {
//		printf("학생 %d 의 점수 : ", i);
//		scanf("%d", &input);
//		score[i] = input;
//	}
//	
//	for (i = 0; i < student; i++) {
//		sum += score[i];
//	}
//	
//	printf("전체 학생 평균 점수 : %d \n", sum / student);
//	free(score);
//	
//	return 0;
//}

///* 2 차원 배열의 동적 할당 */
//#include <stdio.h>
//#include <stdlib.h>
//int main(int argc, char** argv) {
//	int i;
//	int x, y;
//	int** arr; // 우리는 arr[x][y] 를 만들 것이다.
//
//	printf("arr[x][y] 를 만들 것입니다.\n");
//
//	scanf("%d %d", &x, &y);
//
//	arr = (int**)malloc(sizeof(int*) * x);
//
//	for (i = 0; i < x; i++) {
//		arr[i] = (int*)malloc(sizeof(int) * y);
//	}
//
//	printf("생성 완료! \n");
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

	printf("원하시는 구조체 배열의 크기 : ");

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