#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node* next;
}; // remember the comma

int main() {
    struct Node *head = NULL, *temp, *newNode; // three node is to initialize
    int choice = 1; // setting up chioce variable to input the linked list

    // Create Circular Linked List
    while (choice) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            newNode->next = head;
            temp = head;
        } else {
            temp->next = newNode;
            newNode->next = head;
            temp = newNode;
        }

        printf("Do you want to continue? (1/0): ");
        scanf("%d", &choice);
    }

    // Display Circular Linked List
    printf("\nCircular Linked List elements are:\n");
    temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");

    return 0;
}
