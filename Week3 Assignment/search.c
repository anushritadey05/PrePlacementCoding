//Search in linked list

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Insert at end utility
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Iterative search
int searchIterative(struct Node* head, int key) {
    int position = 1;
    while (head != NULL) {
        if (head->data == key)
            return position;
        head = head->next;
        position++;
    }
    return -1; // Not found
}

// Recursive search
int searchRecursive(struct Node* head, int key, int position) {
    if (head == NULL)
        return -1;
    if (head->data == key)
        return position;
    return searchRecursive(head->next, key, position + 1);
}

int main() {
    struct Node* head = NULL;
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    int key = 30;
    int pos = searchIterative(head, key);
    if (pos != -1)
        printf("Iterative: %d found at position %d\n", key, pos);
    else
        printf("Iterative: %d not found\n", key);

    pos = searchRecursive(head, key, 1);
    if (pos != -1)
        printf("Recursive: %d found at position %d\n", key, pos);
    else
        printf("Recursive: %d not found\n", key);

    return 0;
}

