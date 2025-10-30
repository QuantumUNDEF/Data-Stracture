/* it is a linear DS in which insertion is performed at the END called rear of 
queue & deletion is performed from the beginning of the queue*/

#include <stdio.h>
#define SIZE 5  // Maximum size of Queue

int queue[SIZE];
int front = -1, rear = -1;

// Function to insert element
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow! 😩\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
       queue[rear] = value;
        printf("Inserted %d\n", value);
    }
}

// Function to delete element
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! 😶\n");
    } else {
        printf("Deleted %d\n", queue[front]);
        front++;
    }
}

// Function to display the queue
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty! 😅\n");
    } else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

// Main Function
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    enqueue(59);
    display();
    for(int i =0 ; i< SIZE; i++){
        printf("\n%d", queue[i]);
    }
    return 0;
}


















































































