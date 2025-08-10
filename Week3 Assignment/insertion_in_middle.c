//Insert in middle of linked list

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtPosition(struct Node** head, int data, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    // If inserting at the head
    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    int i;

    struct Node* temp = *head;
    for (i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(struct Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    insertAtPosition(&head, 10, 1); // 10
    insertAtPosition(&head, 20, 2); // 10 -> 20
    insertAtPosition(&head, 30, 2); // 10 -> 30 -> 20
    insertAtPosition(&head, 25, 3); // 10 -> 30 -> 25 -> 20

    printList(head);
    return 0;
}

