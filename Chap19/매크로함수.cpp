///* ��ũ�� �Լ�*/
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
//}///* ������ �̸� ����ϱ� */
//#include <stdio.h>
//
//#define PrintVariableName(var) printf(#var "\n");
//
//int main(int argc, char** argv) {
//	int a;
//	PrintVariableName(a);
//	return 0;
//}

///* ## �� ��� */
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
//	printf("�� : %d \n", X + Y); \
//	printf("��� : %d \n", (X + Y) / 2);
//
//int main() {
//	int a, b;
//	printf("�� ���� �Է��ϼ��� : ");
//	scanf("%d %d", &a, &b);
//	SUM_AVG_PRINT(a, b);
//	return 0;
//}

