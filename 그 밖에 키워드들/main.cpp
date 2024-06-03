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