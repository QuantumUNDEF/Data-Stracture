#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;
};
struct node * top = NULL;

void push(int data){
    struct node* newNode = malloc(sizeof(struct node));
    if(!newNode){
        printf("Stack Overflow");
        return ;
    }
    newNode -> data = data;
    newNode -> next = top;
    top  = newNode;
    printf("%d Pushed\n", data);

}
int pop(){
    if (top == NULL){
        printf("Stack Underflow");
        return -1;
    }
    int val = top -> data;
    struct node* temp = top;
    top = top -> next;
    free(temp);
    return val;
}
int peek(){
    if(top == NULL){
        printf("Stack is Empty");
        return -1;
    }

    return top -> data;

}
void display(){
    if (top == NULL){
        printf("Stack is empty");
        return;
    }
    struct node * temp = top;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp = temp -> next;
    }
}
int main(){
    push(121);
    push(122);
    push(123);
    push(124);
    push(125);
    printf("%d Popped.\n",pop());
    printf("%d Top now.\n",peek());
    display();
    return 0;
}
