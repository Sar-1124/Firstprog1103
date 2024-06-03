/* ���� ���� �Ǻ�*/
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

/* typedef �� �̿� */
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

/* ������ ���� ���α׷� */
#include <stdio.h>
int main() {
	int input;
	int a, b;
	while (1) {
		printf("--- ���� --- \n");
		printf("1. ���� \n");
		printf("2. ���� \n");
		printf("3. ���� \n");
		scanf("%d", &input);
		if (input == 1) {
			printf("�� �� : ");
			scanf("%d%d", &a, &b);
			printf("%d �� %d �� �� : %d \n", a, b, a + b);
		}
		else if (input == 2) {
			printf("�� �� : ");
			scanf("%d%d", &a, &b);
			printf("%d �� %d �� �� : %d \n", a, b, a - b);
		}
		else
			break;
	}
	return 0;
}
/*
--- ���� ---
1. ����
2. ����
3. ����
1
�� �� : 123
124
123 �� 124 �� �� : 247
--- ���� ---
*/

/* ���� �ҽ� �ڵ� */
#include <stdio.h>
typedef int CAL_TYPE;
int main() {
	CAL_TYPE input;
	CAL_TYPE a, b;
	while (1) {
		printf("--- ���� --- \n");
		printf("1. ���� \n");
		printf("2. ���� \n");
		printf("3. ���� \n");
		scanf("%d", &input);
		if (input == 1) {
			printf("�� �� : ");
			scanf("%d%d", &a, &b);
			printf("%d �� %d �� �� : %d \n", a, b, a + b);
		}
		else if (input == 2) {
			printf("�� �� : ");
			scanf("%d%d", &a, &b);
			printf("%d �� %d �� �� : %d \n", a, b, a - b);
		}
		else
			break;
	}
	return 0;
}

/*
--- ���� ---
1. ����
2. ����
3. ����
1
�� �� : 123
124
123 �� 124 �� �� : 247
--- ���� ---
*/

/* TAX�� �����غ��� */
#include <stdio.h>
typedef int TAX_TYPE;
int main() {
	TAX_TYPE input;
	TAX_TYPE a, b;
	while (1) {
		printf("--- ���� --- \n");
		printf("1. ���� \n");
		printf("2. ���� \n");
		printf("3. ���� \n");
		scanf("%d", &input);
		if (input == 1) {
			printf("�� �� : ");
			scanf("%d%d", &a, &b);
			printf("%d �� %d �� �� : %d \n", a, b, a + b);
		}
		else if (input == 2) {
			printf("�� �� : ");
			scanf("%d%d", &a, &b);
			printf("%d �� %d �� �� : %d \n", a, b, a - b);
		}
		else
			break;
	}
	return 0;
}