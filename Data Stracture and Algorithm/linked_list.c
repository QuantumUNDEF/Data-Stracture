#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};

int main()
{
    struct node*head;
    head=(struct node*)malloc(sizeof(struct node));
    head -> data = 45;
    head -> next = NULL;
    struct node *current = malloc(sizeof(struct node));
    head -> next = current;
    current -> data = 50;
    current -> next = NULL;
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
    struct node *temp;
    temp = head;
    struct node *new_node = malloc(sizeof(struct node));
    new_node -> data = 100;
    new_node -> next = NULL;
    while (temp -> next != NULL)
    {
      temp = temp -> next;
    }
    temp->next = new_node;
    struct node *ptr = head;
    while(ptr != NULL)
    {
      printf("\n%d", ptr-> data);
      printf("\n%d", ptr -> next);
      ptr = ptr-> next;
    }
}