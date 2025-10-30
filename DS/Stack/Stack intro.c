#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

// push function
void push(int data) {
    if (top == MAX - 1)
        printf("Stack Overflow!\n");
    else {
        top++;
        stack[top] = data;
        printf("%d pushed\n", data);
    }
}

// pop function
void pop() {
    if (top == -1)
        printf("Stack Underflow!\n");
    else {
        printf("%d popped\n", stack[top]);
        top--;
    }
}

int main()
 {
    // pushing elements
    push(10);
    push(20);
    push(30);
    push(40);
    

    // popping elements
    for (int i = 0; i <MAX; i++)
    {
        pop();
    }


    return 0;
}