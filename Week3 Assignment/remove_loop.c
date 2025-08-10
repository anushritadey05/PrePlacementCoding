//Remove loop

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

void removeLoop(struct Node* loop_node, struct Node* head) {
    struct Node* ptr1 = head;
    struct Node* ptr2;

    // Find the start of loop
    while (1) {
        ptr2 = loop_node;
        while (ptr2->next != loop_node && ptr2->next != ptr1) {
            ptr2 = ptr2->next;
        }
        if (ptr2->next == ptr1)
            break;
        ptr1 = ptr1->next;
    }

    // Break the loop
    ptr2->next = NULL;
}

int detectAndRemoveLoop(struct Node* head) {
    struct Node *slow = head, *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        // Loop detected
        if (slow == fast) {
            removeLoop(slow, head);
            return 1;
        }
    }
    return 0;
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

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    // Create a loop for testing: last node -> second node
    head->next->next->next->next = head->next;

    if (detectAndRemoveLoop(head))
        printf("Loop detected and removed\n");
    else
        printf("No loop found\n");

    printList(head);

    return 0;
}

