/*
구조체 포인터 연습
*/
//#include <stdio.h>
//int add_one(int* a);
//struct TEST {
//	int c;
//};
//int main() {
//	struct TEST t;
//	struct TEST* pt = &t;
//	/* pt 가 가리키는 구조체 변수의 c 멤버의 값을 0 으로 한다*/
//	pt->c = 0;
//	/*
//	add_one 함수의 인자에 t 구조체 변수의 멤버 c 의 주소값을
//	전달하고 있다.
//	*/
//	add_one(&t.c);
//	printf("t.c : %d \n", t.c);
//	/*
//	add_one 함수의 인자에 pt 가 가리키는 구조체 변수의 멤버 c
//	의 주소값을 전달하고 있다.
//	*/
//	add_one(&pt->c);
//	printf("t.c : %d \n", t.c);
//	return 0;
//}
//int add_one(int* a) {
//	*a += 1;
//	return 0;
//}

//#include <stdio.h>
//struct TEST {
//	int i;
//	char c;
//};
//int main() {
//	struct TEST st, st2;
//	st.i = 1;
//	st.c = 'c';
//	st2 = st;
//	printf("st2.i : %d \n", st2.i);
//	printf("st2.c : %c \n", st2.c);
//	return 0;
//}

//#include <stdio.h>
//char copy_str(char* dest, const char* src);
//typedef struct TEST {
//	int i;
//	char str[20];
//}T;
//int main() {
//	T a, b;
//
//	b.i = 3;
//	copy_str(b.str, "hello, world");
//	a = b;
//	printf("a.str : %s \n", a.str);
//	printf("a.i : %d \n", a.i);
//	return 0;
//}
//char copy_str(char* dest, const char* src) {
//	while (*src) {
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = '\0';
//	return 1;
//}

///*구조체를 인자로 전달하기 */
//#include <stdio.h>
//struct TEST {
//	int age;
//	int gender;
//};
//int set_human(struct TEST a, int age, int gender);
//int main() {
//	struct TEST human;
//	set_human(human, 10, 1);
//	printf("AGE : %d // Gender : %d ", human.age, human.gender);
//	return 0;
//}
//int set_human(struct TEST a, int age, int gender) {
//	a.age = age;
//	a.gender = gender;
//	return 0;

///* 인자로 제대로 전달하기 */
//#include <stdio.h>
//struct TEST {
//	int age;
//	int gender;
//};
//int set_human(struct TEST* a, int age, int gender);
//int main() {
//	struct TEST human;
//set_human(&human, 10, 1);
//printf("AGE : %d // Gender : %d ", human.age, human.gender);
//return 0;
//}
//int set_human(struct TEST* a, int age, int gender) {
//	a->age = age;
//	a->gender = gender;
//	return 0;
//}

/* 구조체 안의 구조체*/
//#include <stdio.h>
//struct employee {
//	int age;
//	int salary;
//};
//struct company {
//	struct employee data;
//	char name[10];
//};
//int main() {
//	struct company Kim;
//	Kim.data.age = 31;
//	Kim.data.salary = 3000000;
//	printf("Kim's age : %d \n", Kim.data.age);
//	printf("Kim's salary : %d$/year \n", Kim.data.salary);
//	return 0;
//}

///* 구조체를 리턴하는 함수 */
//#include <stdio.h>
//struct AA function(int j);
//struct AA {
//	int i;
//};
//int main() {
//	struct AA a;
//	a = function(10);
//	printf("a.i : %d \n", a.i);
//	return 0;
//}
//struct AA function(int j) {
//	struct AA A;
//	A.i = j;
//	return A;
//}
/*
구조체 변수를 정의하는 색다른 방법.
예제를 이렇게 길게 만든 이유는 소스를 읽으면서 구조체와 조금 더 친해지기 바래서
입니다. 소스를 찬찬히 분석해보세요 ^^
*/
//#include <stdio.h>
//char copy_str(char* dest, const char* src);
//int Print_Obj_Status(struct obj OBJ);
//struct obj {
//	char name[20];
//	int x, y;
//} Ball;
//int main() {
//	Ball.x = 3;
//	Ball.y = 4;
//	copy_str(Ball.name, "RED BALL");
//	Print_Obj_Status(Ball);
//	return 0;
//}
//int Print_Obj_Status(struct obj OBJ) {
//	printf("Location of %s \n", OBJ.name);
//	printf("( %d , %d ) \n", OBJ.x, OBJ.y);
//	return 0;
//}
//char copy_str(char* dest, char* src) {
//	while (*src) {
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = '\0';
//	return 1;
//}

///* 멤버를 쉽게 초기화 하기*/
//#include <stdio.h>
//int Print_Status(struct HUMAN human);
//struct HUMAN {
//	int age;
//	int height;
//	int weight;
//	int gender;
//};
//int main() {
//	struct HUMAN Adam = { 31, 182, 75, 0 };
//	struct HUMAN Eve = { 27, 166, 48, 1 };
//	Print_Status(Adam);
//	Print_Status(Eve);
//}
//int Print_Status(struct HUMAN human) {
//	if (human.gender == 0) {
//		printf("MALE \n");
//	}
//	else {
//		printf("FEMALE \n");
//	}
//	printf("AGE : %d / Height : %d / Weight : %d \n", human.age, human.height,
//		human.weight);
//	if (human.gender == 0 && human.height >= 180) {
//		printf("HE IS A WINNER!! \n");
//	}
//	else if (human.gender == 0 && human.height < 180) {
//		printf("HE IS A LOSER!! \n");
//	}
//	printf("------------------------------------------- \n");
//	return 0;
//}

///* 공용체 */
//#include <stdio.h>
//union A {
//	int i;
//	char j;
//};
//int main() {
//	union A a;
//	a.i = 0x12345678;
//	printf("%x", a.j);
//	return 0;
//}

///* 열거형의 도입 */
//#include <stdio.h>
//enum { RED, BLUE, WHITE, BLACK };
//int main() {
//	int palette = RED;
//	switch (palette) {
//	case RED:
//		printf("palette : RED \n");
//		break;
//	case BLUE:
//		printf("palette : BLUE \n");
//		break;
//	case WHITE:
//		printf("palette : WHITE \n");
//		break;
//	case BLACK:
//		printf("palette : BLACK \n");
//		break;
//	}
//}

/* 열거형 팁 */
#include <stdio.h>
enum { RED = 3, BLUE, WHITE, BLACK };
int main() {
	int palette = BLACK;
	printf("%d \n", palette);
}