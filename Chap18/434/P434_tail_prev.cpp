#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;          
    struct Node* nextNode; 
    struct Node* prevNode; 
} Node;


int SearchNode(Node* head, int value) {

    Node* current = head;

    do {
        if (current->data == value) {
            return current->data;
        }
        current = current->nextNode;
    } while (current != head);

    return -1;
}

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->nextNode = NULL;
    newNode->prevNode = NULL;
    return newNode;
}

void initializeCircularList(Node** head, int values[], int size) {
    if (size == 0) return;

    *head = createNode(values[0]);
    Node* current = *head;

    for (int i = 1; i < size; i++) {
        Node* newNode = createNode(values[i]);
        current->nextNode = newNode;
        newNode->prevNode = current;
        current = newNode;
    }

    current->nextNode = *head;
    (*head)->prevNode = current;
}

void freeList(Node* head) {
    if (head == NULL) return;

    Node* current = head;
    Node* next;


    do {
        next = current->nextNode;
        free(current);
        current = next;
    } while (current != head);
}

int main() {

    int values[] = { 100, 200, 300, 500 };
    Node* head = NULL;
    initializeCircularList(&head, values, 4);

    int searchValue;
    printf("�˻� �� ����� ���� �˷��ּ���: ");
    scanf("%d", &searchValue);

    int result = SearchNode(head, searchValue);

    if (result != -1) {
        printf("���� %d�� ��带 ã�ҽ��ϴ�. Data: %d\n", searchValue, result);
    }
    else {
        printf("���� %d�� ��带 ã�����߽��ϴ�.\n", searchValue);
    }

    freeList(head);

    return 0;
}
