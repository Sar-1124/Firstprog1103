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
    printf("���ڿ��� �Է��ϼ���: ");
    scanf_s("%s", string, (unsigned)sizeof(string));

    strrev(string);
    printf("�Է��� ���ڿ��� �Ųٷ� ����ϸ�: %s", string);

    return 0;
}
