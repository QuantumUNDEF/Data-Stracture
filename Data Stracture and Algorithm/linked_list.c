#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

int main()
{   //creating the linked list
    // first node
    struct node*head;
    head=(struct node*)malloc(sizeof(struct node));
    head -> data = 45;
    head -> next = NULL;
    // second node
    struct node *current = malloc(sizeof(struct node));
    head -> next = current;
    current -> data = 50;
    current -> next = NULL;
    // third node
    current = malloc(sizeof(struct node));
    head -> next -> next = current;
    current -> data = 60;
    current -> next = NULL;

    /*printf("Our 1st node: %d\n",head->data);
    printf("%d", head);
    printf("\nOur 2nd node: %d\n",current->data);
    printf("%d", current);
    printf("\nOur 3nd node: %d\n",current->data);
    printf("\n%d", current); 
    return 0;*/
    // add a node to the last
    struct node *temp; // creating a temporary pointer
    temp = head;
    struct node *new_node = malloc(sizeof(struct node)); //new node
    new_node -> data = 100;
    new_node -> next = NULL;
    // loop to find the last element
    while (temp -> next != NULL){
    temp = temp -> next;
    }
    // updating the last address from NULL to new node
    temp->next = new_node;
    // inserting the node at begining
    struct node *newHead = malloc(sizeof(struct node));
    newHead-> data = 100;
    newHead -> next = head;
    head = newHead;
    // code for printing the linked list
    struct node *ptr = head;
    while(ptr != NULL){
    printf("\n%d", ptr-> data);
    printf("\n%d", ptr -> next);
    ptr = ptr-> next;
    
    }
}