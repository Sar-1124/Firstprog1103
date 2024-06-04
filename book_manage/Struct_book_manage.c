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
    int user_choice; /* 유저가 선택한 메뉴 */
    int num_total_book = 0; /* 현재 책의 수 */
    Book books[100]; // 책의 정보를 저장하는 배열

    while (1) {
        printf("도서 관리 프로그램 \n");
        printf("메뉴를 선택하세요 \n");
        printf("1. 책을 새로 추가하기 \n");
        printf("2. 책을 검색하기 \n");
        printf("3. 책을 빌리기 \n");
        printf("4. 책을 반납하기 \n");
        printf("5. 프로그램 종료 \n");
        printf("당신의 선택은 : ");
        scanf("%d", &user_choice);

        switch (user_choice) {
        case 1:
            /* 책을 새로 추가하는 함수 호출 */
            add_book(books, &num_total_book);
            break;
        case 2:
            /* 책을 검색하는 함수 호출 */
            search_book(books, num_total_book);
            break;
        case 3:
            /* 책을 빌리는 함수 호출 */
            borrow_book(books, num_total_book);
            break;
        case 4:
            /* 책을 반납하는 함수 호출 */
            return_book(books, num_total_book);
            break;
        case 5:
            /* 프로그램을 종료한다. */
            printf("프로그램을 종료합니다.\n");
            return 0;
        default:
            printf("잘못된 선택입니다. 다시 선택하세요.\n");
        }
    }

    return 0;
}

/* 책을 추가하는 함수 */
int add_book(Book* books, int* num_total_book) {
    printf("추가할 책의 제목 : ");
    scanf("%s", books[*num_total_book].book_name);

    printf("추가할 책의 저자 : ");
    scanf("%s", books[*num_total_book].auth_name);

    printf("추가할 책의 출판사 : ");
    scanf("%s", books[*num_total_book].publ_name);

    books[*num_total_book].borrowed = 0; /* 빌려지지 않음 */
    printf("추가 완료! \n");

    (*num_total_book)++;
    return 0;
}

/* 책을 검색하는 함수 */
int search_book(Book* books, int num_total_book) {
    int user_input; /* 사용자의 입력을 받는다. */
    int i;
    char user_search[30];

    printf("어느 것으로 검색 할 것인가요? \n\n");
    printf("1. 책 제목 검색 \n\n");
    printf("2. 지은이 검색 \n\n");
    printf("3. 출판사 검색 \n\n");
    scanf("%d", &user_input);

    printf("검색할 단어를 입력해주세요 : ");
    scanf("%s", user_search);

    printf("검색 결과 \n\n");
    if (user_input == 1) {
        for (i = 0; i < num_total_book; i++) {
            if (compare(books[i].book_name, user_search)) {
                printf("번호 : %d // 책 이름 : %s // 지은이 : %s // 출판사 : %s \n\n", i,
                    books[i].book_name, books[i].auth_name, books[i].publ_name);
            }
        }
    }
    else if (user_input == 2) {
        for (i = 0; i < num_total_book; i++) {
            if (compare(books[i].auth_name, user_search)) {
                printf("번호 : %d // 책 이름 : %s // 지은이 : %s // 출판사 : %s \n\n", i,
                    books[i].book_name, books[i].auth_name, books[i].publ_name);
            }
        }
    }
    else if (user_input == 3) {
        for (i = 0; i < num_total_book; i++) {
            if (compare(books[i].publ_name, user_search)) {
                printf("번호 : %d // 책 이름 : %s // 지은이 : %s // 출판사 : %s \n\n", i,
                    books[i].book_name, books[i].auth_name, books[i].publ_name);
            }
        }
    }
    else {
        printf("잘못된 선택입니다.\n");
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

    printf("빌릴 책의 번호를 말해주세요 \n\n");
    printf("책 번호 : ");
    scanf("%d", &book_num);

    if (book_num < 0 || book_num >= num_total_book) {
        printf("존재하지 않는 책입니다! \n\n");
        return 0;
    }

    if (books[book_num].borrowed == 1) {
        printf("이미 대출된 책입니다! \n\n");
    }
    else {
        printf("책이 성공적으로 대출되었습니다. 7일 후 반납하셔야 합니다. \n\n");
        printf("대출 날짜 : %d일 \n\n", t->tm_mday);
        printf("반납 날짜:  %d일 \n\n", t->tm_mday + 7);
        books[book_num].borrowed = 1;
    }
    return 0;
}

int return_book(Book* books, int num_total_book) {
    int book_num;
    int return_day;
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);

    printf("반납할 책의 번호를 써주세요 \n\n");
    printf("책 번호 : ");
    scanf("%d", &book_num);

    if (book_num < 0 || book_num >= num_total_book) {
        printf("존재하지 않는 책입니다!\n\n");
        return 0;
    }

    printf("반납한 날짜 (일) : ");
    scanf("%d", &return_day);

    if (books[book_num].borrowed == 0) {
        printf("이미 반납되어 있는 상태입니다.\n\n");
    }
    else {
        if (return_day > t->tm_mday + 7) {
            printf("\n반납 기한을 넘겼습니다. 연체되었습니다.\n\n");
        }
        else {
            books[book_num].borrowed = 0;
            printf("성공적으로 반납되었습니다.\n\n");
        }
    }
    return 0;
}
