#include <stdio.h>
#include <string.h>

char *strrev(char* str) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main(void) {
    char string[100];
    printf("문자열을 입력하세요: ");
    scanf_s("%s", string, (unsigned)sizeof(string));

    strrev(string);
    printf("입력한 문자열을 거꾸로 출력하면: %s", string);

    return 0;
}
