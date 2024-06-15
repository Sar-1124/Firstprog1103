#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct BOOK {
    char book_name[30];
    char auth_name[30];
    char publ_name[30];
    int borrowed;
};
typedef struct BOOK BOOK;

int register_book(BOOK* book_list, int* nth);
int search_book(BOOK* book_list, int total_num_book);
int borrow_book(BOOK* book_list, int total_num_book);
int return_book(BOOK* book_list, int total_num_book);
int print_book_list(BOOK* book_list, int total_num_book);
int retrieve_book_info(BOOK** book_list, int* total_num_book);
char compare(const char* str1, const char* str2);

int main() {
    int user_choice; /* ������ ������ �޴� */
    int num_total_book = 0; /* ���� å�� �� */
    BOOK* book_list;
    int i;
    printf("�������� �ִ� ���� �弭 ���� �������ּ��� : ");
    scanf("%d", &user_choice);
    book_list = (BOOK*)malloc(sizeof(BOOK) * user_choice);
    while (1) {
        printf("���� ���� ���α׷� \n\n");
        printf("�޴��� �����ϼ��� \n\n");
        printf("1. å�� ���� �߰��ϱ� \n\n");
        printf("2. å�� �˻��ϱ� \n\n");
        printf("3. å�� ������ \n\n");
        printf("4. å�� �ݳ��ϱ� \n\n");
        printf("5. ���α׷� ���� \n\n");
        printf("6. å���� ������ book_list.txt �� ��� \n\n");
        printf("7. å���� ������ book_list.txt ���� �ҷ��� \n\n");
        printf("8. å���� ����� ��� \n\n");
        printf("����� ������ : ");
        scanf("%d", &user_choice);
        if (user_choice == 1) {
            /* å�� ���� �߰��ϴ� �Լ� ȣ�� */
            register_book(book_list, &num_total_book);
        }
        else if (user_choice == 2) {
            /* å�� �˻��ϴ� �Լ� ȣ�� */
            search_book(book_list, num_total_book);
        }
        else if (user_choice == 3) {
            /* å�� ������ �Լ� ȣ�� */
            borrow_book(book_list, num_total_book);
        }
        else if (user_choice == 4) {
            /* å�� �ݳ��ϴ� �Լ� ȣ�� */
            return_book(book_list, num_total_book);
        }
        else if (user_choice == 5) {
            /* ���α׷��� �����Ѵ�. */
            break;
        }
        else if (user_choice == 6) {
            /* book_list.txt �� å���� ����� ����Ѵ�*/
            print_book_list(book_list, num_total_book);
        }
        else if (user_choice == 7) {
            /* book_list.txt ���� å���� ����� �����´�*/
            retrieve_book_info(&book_list, &num_total_book);
        }
        else if (user_choice == 8) {
            /* å���� ����� ȭ�鿡 ����Ѵ�. */
            for (i = 0; i < num_total_book; i++) {
                printf("å �̸� : %s // �۰� : %s // ���ǻ� : %s // ", book_list[i].book_name,
                    book_list[i].auth_name, book_list[i].publ_name);
                if (book_list[i].borrowed == 0)
                    printf("���� ���� : NO\n");
                else
                    printf("���� ���� : YES\n");
            }
        }
    }
    free(book_list);
    return 0;
}

int print_book_list(BOOK* book_list, int total_num_book) {
    FILE* fp = fopen("book_list.txt", "w");
    int i;
    if (fp == NULL) {
        printf("��� ���� ! \n");
        return -1;
    }
    fprintf(fp, "%d\n", total_num_book);
    for (i = 0; i < total_num_book; i++) {
        fprintf(fp, "%s\n%s\n%s\n", book_list[i].book_name, book_list[i].auth_name,
            book_list[i].publ_name);
        if (book_list[i].borrowed == 0)
            fprintf(fp, "NO\n");
        else
            fprintf(fp, "YES\n");
    }
    printf("��� �Ϸ�! \n");
    fclose(fp);
    return 0;
}

char compare(const char* str1, const char* str2) {
    while (*str1) {
        if (*str1 != *str2) {
            return 0;
        }
        str1++;
        str2++;
    }
    if (*str2 == '\0') return 1;
    return 0;
}

/* �������� book_list �� ���� �ٲ�� �ϹǷ� ���� ������ ���� */
int retrieve_book_info(BOOK** book_list, int* total_num_book) {
    FILE* fp;
    int total_book;
    int i;
    char* str = (char*)malloc(4 * sizeof(char)); // Allocate memory dynamically for the string
    if (fopen_s(&fp, "book_list.txt", "r") != 0) {
        printf("������ ������ ã�� �� �����ϴ�! \n");
        free(str); // Free the allocated memory
        return -1;
    }
    /* ã�Ҵٸ� ��ü å�� ������ �о�´�. */
    fscanf_s(fp, "%d", &total_book);
    (*total_num_book) = total_book;
    /* ������ book_list �����͸� ���� */
    free(*book_list);
    /* �׸��� �ٽ� malloc ���� ���Ҵ� �Ѵ�. */
    (*book_list) = (BOOK*)malloc(sizeof(BOOK) * total_book);
    if (*book_list == NULL) {
        printf("\n ERROR \n");
        free(str); // Free the allocated memory
        return -1;
    }
    for (i = 0; i < total_book; i++) {
        /* book_list[i]->book_name �� �ƴԿ� ����!! */
        fscanf_s(fp, "%s", (*book_list)[i].book_name, sizeof((*book_list)[i].book_name));
        fscanf_s(fp, "%s", (*book_list)[i].auth_name, sizeof((*book_list)[i].auth_name));
        fscanf_s(fp, "%s", (*book_list)[i].publ_name, sizeof((*book_list)[i].publ_name));
        fscanf_s(fp, "%s", str, 4);
        if (compare(str, "YES")) {
            (*book_list)[i].borrowed = 1;
        }
        else if (compare(str, "NO")) {
            (*book_list)[i].borrowed = 0;
        }
    }
    printf("\n�ҷ����� �Ϸ�! \n\n");
    free(str); // Free the allocated memory
    fclose(fp);
    return 0;
}

/* å�� �߰��ϴ� �Լ�*/
int register_book(BOOK* book_list, int* nth) {
    printf("å�� �̸� : ");
    scanf("%s", book_list[*nth].book_name);
    printf("å�� ���� : ");
    scanf("%s", book_list[*nth].auth_name);
    printf("å�� ���ǻ� : ");
    scanf("%s", book_list[*nth].publ_name);
    book_list[*nth].borrowed = 0;
    (*nth)++;
    return 0;
}

/* å�� �˻��ϴ� �Լ� */
int search_book(BOOK* book_list, int total_num_book) {
    int user_input; /* ������� �Է��� �޴´�. */
    int i;
    char user_search[30];
    printf("��� ������ �˻� �� ���ΰ���? \n");
    printf("1. å ���� �˻� \n");
    printf("2. ������ �˻� \n");
    printf("3. ���ǻ� �˻� \n");
    scanf("%d", &user_input);
    printf("�˻��� �ܾ �Է����ּ��� : ");
    scanf("%s", user_search);
    printf("�˻� ��� \n");
    if (user_input == 1) {
        /*
        i �� 0 ���� num_total_book ���� ���鼭 ������ å ������
        ����ڰ� �Է��� �˻���� ���ϰ� �ִ�.
        */
        for (i = 0; i < total_num_book; i++) {
            if (compare(book_list[i].book_name, user_search)) {
                printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ� : %s \n", i,
                    book_list[i].book_name, book_list[i].auth_name,
                    book_list[i].publ_name);
            }
        }
    }
    else if (user_input == 2) {
        /*
        i �� 0 ���� num_total_book ���� ���鼭 ������ ������ �̸���
        ����ڰ� �Է��� �˻���� ���ϰ� �ִ�.
        */
        for (i = 0; i < total_num_book; i++) {
            if (compare(book_list[i].auth_name, user_search)) {
                printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ� : %s \n", i,
                    book_list[i].book_name, book_list[i].auth_name,
                    book_list[i].publ_name);
            }
        }
    }
    else if (user_input == 3) {
        /*
        i �� 0 ���� num_total_book ���� ���鼭 ������ ���ǻ縦
        ����ڰ� �Է��� �˻���� ���ϰ� �ִ�.
        */
        for (i = 0; i < total_num_book; i++) {
            if (compare(book_list[i].publ_name, user_search)) {
                printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ� : %s \n", i,
                    book_list[i].book_name, book_list[i].auth_name,
                    book_list[i].publ_name);
            }
        }
    }
    return 0;
}


int borrow_book(BOOK* book_list, int total_num_book) {
    int book_num;
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);

    printf("���� å�� ��ȣ�� �����ּ��� \n\n");
    printf("å ��ȣ : ");
    scanf("%d", &book_num);

    if (book_num < 0 || book_num >= total_num_book) {
        printf("�������� �ʴ� å�Դϴ�! \n\n");
        return 0;
    }

    if (book_list[book_num].borrowed == 1) {
        printf("�̹� ����� å�Դϴ�! \n\n");
    }
    else {
        printf("å�� ���������� ����Ǿ����ϴ�. 7�� �� �ݳ��ϼž� �մϴ�. \n\n");
        printf("���� ��¥ : %d�� \n\n", t->tm_mday);
        printf("�ݳ� ��¥:  %d�� \n\n", t->tm_mday + 7);
        book_list[book_num].borrowed = 1;
    }
    return 0;
}

int return_book(BOOK* book_list, int total_num_book) {
    int book_num;
    int return_day;
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);

    printf("�ݳ��� å�� ��ȣ�� ���ּ��� \n\n");
    printf("å ��ȣ : ");
    scanf("%d", &book_num);

    if (book_num < 0 || book_num >= total_num_book) {
        printf("�������� �ʴ� å�Դϴ�!\n\n");
        return 0;
    }

    printf("�ݳ��� ��¥ (��) : ");
    scanf("%d", &return_day);

    if (book_list[book_num].borrowed == 0) {
        printf("�̹� �ݳ��Ǿ� �ִ� �����Դϴ�.\n\n");
    }
    else {
        if (return_day > t->tm_mday + 7) {
            printf("\n�ݳ� ������ �Ѱ���ϴ�. ��ü�Ǿ����ϴ�.\n\n");
        }
        else {
            book_list[book_num].borrowed = 0;
            printf("���������� �ݳ��Ǿ����ϴ�.\n\n");
        }
    }
    return 0;
}
