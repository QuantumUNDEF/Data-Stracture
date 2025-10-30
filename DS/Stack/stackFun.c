#include <stdio.h>
#include <stdlib.h>
#define MAX 5
struct node *current=NULL;
struct node * head=NULL;
int top=0;

// int isfull(int top){
//     if(top ==MAX-1){
//         return 1;

//     }else{
//         return 0;
//     }
// }


struct node{
    int data;
    struct node* next;
};

void Pop(){
    if((top==0)){
        printf("\nunderflow");
    }else{
        struct node*ptr= head;
        if (ptr->next ==NULL){
            free(head);
            head = NULL;
            current = NULL;
        }else{
        while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        free(ptr->next);
        ptr->next=NULL;
        current= ptr;
    }
        top--;
    }
}

void Push(int data){
    if (top==MAX){
        printf("overflow\n");
    }
    else if(current==NULL)
    {
        struct node*head1=malloc(sizeof(struct node));
        head1->data=data;
        head1->next= NULL;
        current=head1;
        head=head1;
        top++;
    }
    else 
    {
        struct node*head1=malloc(sizeof(struct node));
        head1->data=data;
        head1->next= NULL;
        current->next=head1;
        current=head1;
        top++;
    }
    
}

void printstack(){
    if (head==NULL){
        printf("Empty");
    }else{
    struct node*ptr= head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    
    }
}

int main(){
    Push(10);
    Push(20);
    Push(50);
    Push(40);
    Push(30);
    Push(60);
    printstack();
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();

    return 0;
}