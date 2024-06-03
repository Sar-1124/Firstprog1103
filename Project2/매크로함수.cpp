///* 매크로 함수*/
//#include <stdio.h>
//
//int square(int x);
//int square2(int x);
////#define square(x) (x) * (x)
//int square(int x) { return x * x; }
//int square2(int* x) { return *x * *x; }
//
//int main(int argc, char** argv) {
//	int a = 5;
//	printf("square(3) : %d \n", square(a));
//	printf("square(3) : %d \n", square2(&a));
//	return 0;
//}///* 변수의 이름 출력하기 */
//#include <stdio.h>
//
//#define PrintVariableName(var) printf(#var "\n");
//
//int main(int argc, char** argv) {
//	int a;
//	PrintVariableName(a);
//	return 0;
//}

///* ## 의 사용 */
//#include <stdio.h>
//
//#define AddName(x, y) x##y
//
//int main(int argc, char** argv) {
//	int AddName(a, b);
//	ab = 3;
//	printf("%d \n", ab);
//	return 0;
//}

//#include <stdio.h>
//#define SUM_AVG_PRINT(X, Y) \
//	printf("합 : %d \n", X + Y); \
//	printf("평균 : %d \n", (X + Y) / 2);
//
//int main() {
//	int a, b;
//	printf("두 수를 입력하세요 : ");
//	scanf("%d %d", &a, &b);
//	SUM_AVG_PRINT(a, b);
//	return 0;
//}

