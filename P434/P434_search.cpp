#include <stdio.h>
#include <stdlib.h>

// Node ����ü ����
typedef struct Node {
    int data;
    struct Node* next;
} Node;


int SearchNode(Node* head, int value) {
    Node* current = head;

    while (current != NULL) {
        if (current->data == value) {
            return current->data; 
        }
        current = current->next; 
    }

    return -1;
}

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void freeList(Node* head) {
    Node* tmp;
    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}

int main() {

    Node* node1 = createNode(100);
    Node* node2 = createNode(200);
    Node* node3 = createNode(300);
    Node* node4 = createNode(500);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    int searchValue;
    printf("�˻� �� ����� ���� �˷��ּ���: ");
    scanf("%d", &searchValue);

    int result = SearchNode(node1, searchValue);

    if (result != -1) {
        printf("���� %d�� ��带 ã�ҽ��ϴ� : %d\n", searchValue, result);
    }
    else {
        printf("���� %d�� ��带 ã�� ���߽��ϴ�.\n", searchValue);
    }

    freeList(node1);

    return 0;
}
