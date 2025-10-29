#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL; // top pointer (global)

// Push operation
void push(int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Stack Overflow!\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;  // Link new node to old top
    top = newNode;        // Update top
    printf("%d pushed to stack.\n", value);
}

// Pop operation
void pop() {
    if (top == NULL) {
        printf("Stack Underflow!\n");
        return;
    }
    struct Node* temp = top;
    printf("%d popped from stack.\n", top->data);
    top = top->next; // Move top pointer
    free(temp);
}

// Peek operation
void peek() {
    if (top == NULL) {
        printf("Stack is empty.\n");
    } else {
        printf("Top element: %d\n", top->data);
    }
}

// Display all elements
void display() {
    struct Node* temp = top;
    if (temp == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements:\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

// Main function
int main() {
    push(10);
    push(20);
    push(30);
    display();

    peek();
    pop();
    display();

    return 0;
}
