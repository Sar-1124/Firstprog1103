#include <stdio.h>
#include <time.h>

int add_book(char(*book_name)[30], char(*auth_name)[30], char(*publ_name)[30], int* borrowed, int* num_total_book);
int search_book(char(*book_name)[30], char(*auth_name)[30], char(*publ_name)[30], int num_total_book);
int compare(char* str1, char* str2);
int borrow_book(int* borrowed, char date, int num_total_book);
int return_book(int* borrowed, char date, int num_total_book);


int main(int argc, char* argv[])
{
	int user_choice; /* ������ ������ �޴� */
	int num_total_book = 0; /* ���� å�� �� */
	char book_name[100][30], auth_name[100][30], publ_name[100][30]; // å�� ����, ����, ���ǻ縦 �����ϴ� �迭
	int borrowed[100]; // å�� ����Ǿ����� ���θ� �����ϴ� �迭
	char date; // ���� ��¥�� �����ϴ� ����

	while (1) {
		printf("���� ���� ���α׷� \n");

		printf("�޴��� �����ϼ��� \n");

		printf("1. å�� ���� �߰��ϱ� \n");
		printf("2. å�� �˻��ϱ� \n");
		printf("3. å�� ������ \n");
		printf("4. å�� �ݳ��ϱ� \n");
		printf("5. ���α׷� ���� \n");

		printf("����� ������ : ");
		scanf_s("%d", &user_choice, (unsigned)sizeof(user_choice));

		switch (user_choice) {
		case 1:
			/* å�� ���� �߰��ϴ� �Լ� ȣ�� */
			add_book(book_name, auth_name, publ_name, borrowed, &num_total_book);
			break;
		case 2:
			/* å�� �˻��ϴ� �Լ� ȣ�� */
			search_book(book_name, auth_name, publ_name, num_total_book);
			break;
		case 3:
			/* å�� ������ �Լ� ȣ�� */
			borrow_book(borrowed, date, num_total_book);
			break;
		case 4:
			/* å�� �ݳ��ϴ� �Լ� ȣ�� */
			return_book(borrowed, date, num_total_book);
			break;
		case 5:
			/* ���α׷��� �����Ѵ�. */
			break;
		}
	}
	return 0;
}

/* å�� �߰��ϴ� �Լ�*/
int add_book(char(*book_name)[30], char(*auth_name)[30], char(*publ_name)[30], int* borrowed, int* num_total_book)
{
	printf("�߰��� å�� ���� : ");
	scanf_s("%s", book_name[*num_total_book], (unsigned)sizeof(book_name));

	printf("�߰��� å�� ���� : ");
	scanf_s("%s", auth_name[*num_total_book], (unsigned)sizeof(auth_name));

	printf("�߰��� å�� ���ǻ� : ");
	scanf_s("%s", publ_name[*num_total_book], (unsigned)sizeof(publ_name));

	borrowed[*num_total_book] = 0; /* �������� ����*/
	printf("�߰� �Ϸ�! \n");

	(*num_total_book)++;
	return 0;
}

/* å�� �˻��ϴ� �Լ� */
int search_book(char(*book_name)[30], char(*auth_name)[30], char(*publ_name)[30], int num_total_book) {
	int user_input; /* ������� �Է��� �޴´�. */
	int i;
	char user_search[30];

	printf("��� ������ �˻� �� ���ΰ���? \n\n");
	printf("1. å ���� �˻� \n\n");
	printf("2. ������ �˻� \n\n");
	printf("3. ���ǻ� �˻� \n\n");
	scanf_s("%d", &user_input);

	printf("�˻��� �ܾ �Է����ּ��� : ");
	scanf_s("%s", user_search, sizeof(user_search));

	printf("�˻� ��� \n\n");
	if (user_input == 1) {
		/*
		i �� 0 ���� num_total_book ���� ���鼭 ������ å ������
		����ڰ� �Է��� �˻���� ���ϰ� �ִ�.
		*/
		for (i = 0; i < num_total_book; i++) {
			if (compare(book_name[i], user_search)) {
				printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ� : %s \n\n", i,
					book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}
	else if (user_input == 2) {
		/*
		i �� 0 ���� num_total_book ���� ���鼭 ������ ������ �̸���
		����ڰ� �Է��� �˻���� ���ϰ� �ִ�.
		*/
		for (i = 0; i < num_total_book; i++) {
			if (compare(auth_name[i], user_search)) {
				printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ� : %s \n\n", i,
					book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}
	else if (user_input == 3) {
		/*
		i �� 0 ���� num_total_book ���� ���鼭 ������ ���ǻ縦
		����ڰ� �Է��� �˻���� ���ϰ� �ִ�.
		*/
		for (i = 0; i < num_total_book; i++) {
			if (compare(publ_name[i], user_search)) {
				printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ� : %s \n\n", i,
					book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}
	return 0;
}

int compare(char* str1, char* str2) {
	while (*str1) {
		if (*str1 != *str2) {
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str2 == '\0')
		return 1;
	return 0;
}

int borrow_book(int* borrowed, char date, int num_total_book) {
	/* ����ڷ� ���� å��ȣ�� ���� ����*/
	int book_num;
	time_t timer = time(NULL);
	struct tm* t = localtime(&timer);

	printf("���� å�� ��ȣ�� �����ּ��� \n\n");
	printf("å ��ȣ : ");
	scanf_s("%d", &book_num, (unsigned)sizeof(book_num));
	if (borrowed[book_num] == 1) {
		printf("�̹� ����� å�Դϴ�! \n\n");
	}
	else if (book_num < 0 || book_num >= num_total_book) {
		printf("�������� �ʴ� å�Դϴ�! \n\n");
	}
	else {
		printf("å�� ���������� ����Ǿ����ϴ�. 7�� �� �ݳ��ϼž� �մϴ�. \n\n");
		printf("���� ��¥ : %d�� \n\n",  t->tm_mday);
		printf("�ݳ� ��¥:  %d�� \n\n", t->tm_mday + 7);
		borrowed[book_num] = 1;
	}
	return 0;
}

int return_book(int* borrowed, char date, int num_total_book) {
	/* �ݳ��� å�� ��ȣ */
	int num_book;
	time_t timer = time(NULL);
	struct tm* t = localtime(&timer);

	printf("�ݳ��� å�� ��ȣ�� ���ּ��� \n\n");
	printf("å ��ȣ : ");
	scanf_s("%d", &num_book, (unsigned)sizeof(num_book));
	printf("�ݳ��� ��¥: ");
	scanf_s("%d", &date, sizeof(date));
	if (borrowed[num_book] == 0) {
		printf("�̹� �ݳ��Ǿ� �ִ� �����Դϴ�.\n\n");
	}
	else if (num_book < 0 || num_book >= num_total_book) {
		printf("�������� �ʴ� å�Դϴ�!\n\n");
	}
	else {
		for (int i = 0; i < num_total_book; i++) {
			if (borrowed[i] == 1) {
				if (date > t->tm_mday + 7) {
					printf("\n�ݳ� ������ �Ѱ���ϴ�. ��ü�Ǿ����ϴ�.\n\n");
				}
				else {
					borrowed[num_book] = 0;
					printf("���������� �ݳ��Ǿ����ϴ�.\n\n");
				}
			}
		}
		return 0;
	}
}