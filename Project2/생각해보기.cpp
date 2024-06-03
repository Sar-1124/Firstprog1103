__inline int some_function(int a) {
	a == 0 ? 1 : a == 1 ? 3 : a * 2;

	/*if (a == 0)
		return 1;
	else if (a == 1)
		return 3;
	else
		return a * 2;*/
}

#include <stdio.h>
#define some_function(a) a == 0 ? 1 : a == 1 ? 3 : a * 2
int main(int argc, char** argv) {
	printf("값을 입력해 주세요: ");
	scanf("%d", some_function(a));
	return 0;
}

/* 루저 위너 판별*/
#include <stdio.h>
int Print_Status(struct HUMAN human);
struct HUMAN {
	int age;
	int height;
	int weight;
	int gender;
};
int main() {
	struct HUMAN Adam = { 31, 182, 75, 0 };
	struct HUMAN Eve = { 27, 166, 48, 1 };
	Print_Status(Adam);
	Print_Status(Eve);
}
int Print_Status(struct HUMAN human) {
	if (human.gender == 0) {
		printf("MALE \n");
	}
	else {
		printf("FEMALE \n");
	}
	printf("AGE : %d / Height : %d / Weight : %d \n", human.age, human.height,
		human.weight);
	if (human.gender == 0 && human.height >= 180) {
		printf("HE IS A WINNER!! \n");
	}
	else if (human.gender == 0 && human.height < 180) {
		printf("HE IS A LOSER!! \n");
	}
	printf("------------------------------------------- \n");
	return 0;
}
/*
 MALE
AGE : 31 / Height : 182 / Weight : 75
HE IS A WINNER!!
-------------------------------------------
FEMALE
AGE : 27 / Height : 166 / Weight : 48
-------------------------------------------
*/

/* typedef 의 이용 */
#include <stdio.h>
struct HUMAN {
	int age;
	int height;
	int weight;
	int gender;
};
typedef struct HUMAN Human;
int Print_Status(Human human);
int main() {
	Human Adam = { 31, 182, 75, 0 };
	Human Eve = { 27, 166, 48, 1 };
	Print_Status(Adam);
	Print_Status(Eve);
}
int Print_Status(Human human) {
	if (human.gender == 0) {
		printf("MALE \n");
	}
	else {
		printf("FEMALE \n");
	}
	printf("AGE : %d / Height : %d / Weight : %d \n", human.age, human.height,
		human.weight);
	if (human.gender == 0 && human.height >= 180) {
		printf("HE IS A WINNER!! \n");
	}
	else if (human.gender == 0 && human.height < 180) {
		printf("HE IS A LOSER!! \n");
	}
	printf("------------------------------------------- \n");
	return 0;
}
/*
MALE
AGE : 31 / Height : 182 / Weight : 75
HE IS A WINNER!!
-------------------------------------------
FEMALE
AGE : 27 / Height : 166 / Weight : 48
-------------------------------------------
*/

/* 간단한 계산기 프로그램 */
#include <stdio.h>
int main() {
	int input;
	int a, b;
	while (1) {
		printf("--- 계산기 --- \n");
		printf("1. 덧셈 \n");
		printf("2. 뺄셈 \n");
		printf("3. 종료 \n");
		scanf("%d", &input);
		if (input == 1) {
			printf("두 수 : ");
			scanf("%d%d", &a, &b);
			printf("%d 와 %d 의 합 : %d \n", a, b, a + b);
		}
		else if (input == 2) {
			printf("두 수 : ");
			scanf("%d%d", &a, &b);
			printf("%d 와 %d 의 차 : %d \n", a, b, a - b);
		}
		else
			break;
	}
	return 0;
}
/*
--- 계산기 ---
1. 덧셈
2. 뺄셈
3. 종료
1
두 수 : 123
124
123 와 124 의 합 : 247
--- 계산기 ---
*/

/* 향상된 소스 코드 */
#include <stdio.h>
typedef int CAL_TYPE;
int main() {
	CAL_TYPE input;
	CAL_TYPE a, b;
	while (1) {
		printf("--- 계산기 --- \n");
		printf("1. 덧셈 \n");
		printf("2. 뺄셈 \n");
		printf("3. 종료 \n");
		scanf("%d", &input);
		if (input == 1) {
			printf("두 수 : ");
			scanf("%d%d", &a, &b);
			printf("%d 와 %d 의 합 : %d \n", a, b, a + b);
		}
		else if (input == 2) {
			printf("두 수 : ");
			scanf("%d%d", &a, &b);
			printf("%d 와 %d 의 차 : %d \n", a, b, a - b);
		}
		else
			break;
	}
	return 0;
}

/*
--- 계산기 ---
1. 덧셈
2. 뺄셈
3. 종료
1
두 수 : 123
124
123 와 124 의 합 : 247
--- 계산기 ---
*/

/* TAX로 변경해보기 */
#include <stdio.h>
typedef int TAX_TYPE;
int main() {
	TAX_TYPE input;
	TAX_TYPE a, b;
	while (1) {
		printf("--- 계산기 --- \n");
		printf("1. 덧셈 \n");
		printf("2. 뺄셈 \n");
		printf("3. 종료 \n");
		scanf("%d", &input);
		if (input == 1) {
			printf("두 수 : ");
			scanf("%d%d", &a, &b);
			printf("%d 와 %d 의 합 : %d \n", a, b, a + b);
		}
		else if (input == 2) {
			printf("두 수 : ");
			scanf("%d%d", &a, &b);
			printf("%d 와 %d 의 차 : %d \n", a, b, a - b);
		}
		else
			break;
	}
	return 0;
}

/* 여러가지 typedef 예제들 */
#include <stdio.h>
int add/*int a = 함수이름, 함수이름이 주소.*/(int a, int b) { return a + b; }
typedef int CAL_TYPE;
typedef int (*Padd)/*포인터가 온것은 램번지를 넣으려고함.*/(int, int);
typedef int Arrays[10];
int main() {
	CAL_TYPE a = 10;
	Arrays /* Arrays -> arr로 치환 */ arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	Padd /*ptr -> 주소*/ptr /*<<-포인터*/ = add; /* 주소값 */
	printf("a : %d \n", a);
	printf("arr[3] : %d \n", arr[3]);
	printf("add(3, 5) : %d \n", ptr(3, 5));
	return 0;
}