//Nth node from end

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

void nthFromEnd(struct Node* head, int n) {
    struct Node* fast = head;
    struct Node* slow = head;
    int i;
    for (i = 0; i < n; i++) {
        if (fast == NULL) {
            printf("List has fewer than %d nodes\n", n);
            return;
        }
        fast = fast->next;
    }

    while (fast != NULL) {
        slow = slow->next;
        fast = fast->next;
    }

    printf("%dth node from end is: %d\n", n, slow->data);
}

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);

    nthFromEnd(head, 2); // 2nd node from end ? 40

    return 0;
}

