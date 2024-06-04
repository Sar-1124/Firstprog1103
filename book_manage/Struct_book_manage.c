#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct Book {
    char book_name[30];
    char auth_name[30];
    char publ_name[30];
    int borrowed;
} Book;

int add_book(Book* books, int* num_total_book);
int search_book(Book* books, int num_total_book);
int compare(const char* str1, const char* str2);
int borrow_book(Book* books, int num_total_book);
int return_book(Book* books, int num_total_book);

int main(void) {
    int user_choice; /* ������ ������ �޴� */
    int num_total_book = 0; /* ���� å�� �� */
    Book books[100]; // å�� ������ �����ϴ� �迭

    while (1) {
        printf("���� ���� ���α׷� \n");
        printf("�޴��� �����ϼ��� \n");
        printf("1. å�� ���� �߰��ϱ� \n");
        printf("2. å�� �˻��ϱ� \n");
        printf("3. å�� ������ \n");
        printf("4. å�� �ݳ��ϱ� \n");
        printf("5. ���α׷� ���� \n");
        printf("����� ������ : ");
        scanf("%d", &user_choice);

        switch (user_choice) {
        case 1:
            /* å�� ���� �߰��ϴ� �Լ� ȣ�� */
            add_book(books, &num_total_book);
            break;
        case 2:
            /* å�� �˻��ϴ� �Լ� ȣ�� */
            search_book(books, num_total_book);
            break;
        case 3:
            /* å�� ������ �Լ� ȣ�� */
            borrow_book(books, num_total_book);
            break;
        case 4:
            /* å�� �ݳ��ϴ� �Լ� ȣ�� */
            return_book(books, num_total_book);
            break;
        case 5:
            /* ���α׷��� �����Ѵ�. */
            printf("���α׷��� �����մϴ�.\n");
            return 0;
        default:
            printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
        }
    }

    return 0;
}

/* å�� �߰��ϴ� �Լ� */
int add_book(Book* books, int* num_total_book) {
    printf("�߰��� å�� ���� : ");
    scanf("%s", books[*num_total_book].book_name);

    printf("�߰��� å�� ���� : ");
    scanf("%s", books[*num_total_book].auth_name);

    printf("�߰��� å�� ���ǻ� : ");
    scanf("%s", books[*num_total_book].publ_name);

    books[*num_total_book].borrowed = 0; /* �������� ���� */
    printf("�߰� �Ϸ�! \n");

    (*num_total_book)++;
    return 0;
}

/* å�� �˻��ϴ� �Լ� */
int search_book(Book* books, int num_total_book) {
    int user_input; /* ������� �Է��� �޴´�. */
    int i;
    char user_search[30];

    printf("��� ������ �˻� �� ���ΰ���? \n\n");
    printf("1. å ���� �˻� \n\n");
    printf("2. ������ �˻� \n\n");
    printf("3. ���ǻ� �˻� \n\n");
    scanf("%d", &user_input);

    printf("�˻��� �ܾ �Է����ּ��� : ");
    scanf("%s", user_search);

    printf("�˻� ��� \n\n");
    if (user_input == 1) {
        for (i = 0; i < num_total_book; i++) {
            if (compare(books[i].book_name, user_search)) {
                printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ� : %s \n\n", i,
                    books[i].book_name, books[i].auth_name, books[i].publ_name);
            }
        }
    }
    else if (user_input == 2) {
        for (i = 0; i < num_total_book; i++) {
            if (compare(books[i].auth_name, user_search)) {
                printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ� : %s \n\n", i,
                    books[i].book_name, books[i].auth_name, books[i].publ_name);
            }
        }
    }
    else if (user_input == 3) {
        for (i = 0; i < num_total_book; i++) {
            if (compare(books[i].publ_name, user_search)) {
                printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ� : %s \n\n", i,
                    books[i].book_name, books[i].auth_name, books[i].publ_name);
            }
        }
    }
    else {
        printf("�߸��� �����Դϴ�.\n");
    }
    return 0;
}

int compare(const char* str1, const char* str2) {
    return strcmp(str1, str2) == 0;
}

int borrow_book(Book* books, int num_total_book) {
    int book_num;
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);

    printf("���� å�� ��ȣ�� �����ּ��� \n\n");
    printf("å ��ȣ : ");
    scanf("%d", &book_num);

    if (book_num < 0 || book_num >= num_total_book) {
        printf("�������� �ʴ� å�Դϴ�! \n\n");
        return 0;
    }

    if (books[book_num].borrowed == 1) {
        printf("�̹� ����� å�Դϴ�! \n\n");
    }
    else {
        printf("å�� ���������� ����Ǿ����ϴ�. 7�� �� �ݳ��ϼž� �մϴ�. \n\n");
        printf("���� ��¥ : %d�� \n\n", t->tm_mday);
        printf("�ݳ� ��¥:  %d�� \n\n", t->tm_mday + 7);
        books[book_num].borrowed = 1;
    }
    return 0;
}

int return_book(Book* books, int num_total_book) {
    int book_num;
    int return_day;
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);

    printf("�ݳ��� å�� ��ȣ�� ���ּ��� \n\n");
    printf("å ��ȣ : ");
    scanf("%d", &book_num);

    if (book_num < 0 || book_num >= num_total_book) {
        printf("�������� �ʴ� å�Դϴ�!\n\n");
        return 0;
    }

    printf("�ݳ��� ��¥ (��) : ");
    scanf("%d", &return_day);

    if (books[book_num].borrowed == 0) {
        printf("�̹� �ݳ��Ǿ� �ִ� �����Դϴ�.\n\n");
    }
    else {
        if (return_day > t->tm_mday + 7) {
            printf("\n�ݳ� ������ �Ѱ���ϴ�. ��ü�Ǿ����ϴ�.\n\n");
        }
        else {
            books[book_num].borrowed = 0;
            printf("���������� �ݳ��Ǿ����ϴ�.\n\n");
        }
    }
    return 0;
}
