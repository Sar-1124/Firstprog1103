#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data; 
    struct Node* nextNode;
    struct Node* prevNode;
} Node;


int SearchNode(Node* head, int value) {

    Node* current = head;

    while (current != NULL) {
        if (current->data == value) {
            return current->data;
        }
        current = current->nextNode;
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
    newNode->nextNode = NULL;
    newNode->prevNode = NULL;
    return newNode;
}


void freeList(Node* head) {
    Node* tmp;
    while (head != NULL) {
        tmp = head;
        head = head->nextNode;
        free(tmp);
    }
}

int main() {

    Node* Node1 = createNode(100);
    Node* Node2 = createNode(200);
    Node* Node3 = createNode(300);
    Node* Node4 = createNode(500);

    Node1->nextNode = Node2;
    Node2->prevNode = Node1;
    Node2->nextNode = Node3;
    Node3->prevNode = Node2;
    Node3->nextNode = Node4;
    Node4->prevNode = Node3;

    int searchValue;
    printf("�˻� �� ����� ���� �˷��ּ���: ");
    scanf("%d", &searchValue);


    int result = SearchNode(Node1, searchValue);

    if (result != -1) {
        printf("���� %d�� ��带 ã�ҽ��ϴ�. Data: %d\n", searchValue, result);
    }
    else {
        printf("���� %d�� ��带 ã�� ���߽��ϴ�.\n", searchValue);
    }
    
    freeList(Node1);

    return 0;
}
