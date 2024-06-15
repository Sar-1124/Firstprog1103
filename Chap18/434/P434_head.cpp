#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* nextnode;
};

struct Node* createnode(int data);
struct Node* insertnode(struct Node* current, int data);
int countnode(struct Node* head);

int main() {
    struct Node* node1 = createnode(100);
    struct Node* node2 = insertnode(node1, 200);
    struct Node* node3 = insertnode(node2, 300);
    struct Node* node4 = insertnode(node2, 400);

    printf("����� ���� : %d\n", countnode(node1));

    return 0;
}

struct Node* createnode(int data) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));

    newnode->data = data;
    newnode->nextnode = NULL;

    return newnode;
}

struct Node* insertnode(struct Node* current, int data) {
    struct Node* after = current->nextnode;

    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));

    newnode->data = data;
    newnode->nextnode = after;

    current->nextnode = newnode;

    return newnode;
}

int countnode(struct Node* head) {
    int i = 0;

    while (head) {
        head = head->nextnode;
        i++;
    }

    return i;
}