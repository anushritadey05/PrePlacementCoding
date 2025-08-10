//Add two numbers represented by linked lists

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* addTwoNumbers(struct Node* l1, struct Node* l2) {
    struct Node dummy;
    struct Node* curr = &dummy;
    dummy.next = NULL;
    int carry = 0;

    while (l1 || l2 || carry) {
        int val1 = (l1) ? l1->data : 0;
        int val2 = (l2) ? l2->data : 0;

        int total = val1 + val2 + carry;
        carry = total / 10;

        curr->next = createNode(total % 10);
        curr = curr->next;

        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }

    return dummy.next;
}

void printList(struct Node* node) {
    while (node) {
        printf("%d ? ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* l1 = createNode(2);
    l1->next = createNode(4);
    l1->next->next = createNode(3);

    struct Node* l2 = createNode(5);
    l2->next = createNode(6);
    l2->next->next = createNode(4);

    struct Node* result = addTwoNumbers(l1, l2);
    printList(result);

    return 0;
}

