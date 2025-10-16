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
    head -> data = 1;
    head -> next = NULL;
    // second node
    struct node *current = malloc(sizeof(struct node));
    head -> next = current;
    current -> data = 2;
    current -> next = NULL;
    // third node
    current = malloc(sizeof(struct node));
    head -> next -> next = current;
    current -> data = 3;
    current -> next = NULL;
// basic approach for printing the list
    /*printf("Our 1st node: %d\n",head->data);
    printf("%d", head);
    printf("\nOur 2nd node: %d\n",current->data);
    printf("%d", current);
    printf("\nOur 3nd node: %d\n",current->data);
    printf("\n%d", current); 
    return 0;*/
    //printing original
    printf("\nOriginal list: ");
    struct node *ptr6 = head;
    while(ptr6 != NULL)
    {
        printf("\n%d", ptr6-> data);
        //printf("\n%d", ptr -> next);
        ptr6 = ptr6 -> next;
    }
    // add a node to the last
    struct node *temp; // creating a temporary pointer
    temp = head;
    struct node *new_node = malloc(sizeof(struct node)); //new node
    new_node -> data = 4;
    new_node -> next = NULL;
    // loop to find the last element
    while (temp -> next != NULL)
    {
        temp = temp -> next;
    }
    // updating the last address from NULL to new node
    temp->next = new_node;
    printf("\nElement added at Last: ");
    struct node *ptr7 = head;
    // printing
    while(ptr7 != NULL)
    {
        printf("\n%d", ptr7-> data);
        //printf("\n%d", ptr -> next);
        ptr7 = ptr7-> next;
    }
    // inserting the node at begining
    struct node *newHead = malloc(sizeof(struct node));
    newHead-> data = 5;
    newHead -> next = head;
    head = newHead;
    printf("\nElement added at First");
    struct node *ptr8 = head;
    while(ptr8 != NULL)
    {
        printf("\n%d", ptr8-> data);
        //printf("\n%d", ptr -> next);
        ptr8 = ptr8-> next;
    }
    // insertion at a spectic position
    int position = 5;
    struct node *newnode2 = malloc(sizeof(struct node));
    newnode2 -> data = 6;
    newnode2 -> next = NULL;
    struct node *temp2  = head;
    for(int i = 1; i< (position -1)&& temp2 !=NULL; i++)
    {
        temp2 = temp2 -> next;
    }
    if(temp2 != NULL)
    {
        newnode2-> next = temp2-> next;
        temp2 -> next = newnode2;
    }
    // printing linked list
    printf("\nNode added at a specific position(5th): ");
    struct node *ptr = head;
    while(ptr != NULL)
    {
        printf("\n%d", ptr-> data);
        //printf("\n%d", ptr -> next);
        ptr = ptr-> next;
    }
    // deletion the first node
    struct node *temp3 = head;
    head = head -> next;
    free(temp3);
    
    // printing
    printf("\nFirst element Delteted from Linked list: ");
    struct node *ptr2 = head;
    while(ptr2 != NULL)
    {
        printf("\n%d", ptr2-> data);
        //printf("\n%d", ptr -> next);
        ptr2 = ptr2-> next;
    }
    // deleting the last element:
    if(head == NULL)
    {
        printf("NO node in element");
    }
    else if (head -> next == NULL)
    {
        free(head);
        head = NULL;
        printf("ONLY one node is present");
    }
    else
    {
        struct node *prev = head;
        struct node *current3 = head -> next;
        
    
        while(current3 -> next != NULL)
        {
            prev = current3 ;
            current3 = current3 -> next;
        }
        prev -> next = NULL;
        
        free(current3);
    }        
    //printf("\nLast element Deleted succeccfully!");
    printf("\nLast element Delteted from Linked list: ");
    struct node *ptr5 = head;
    while(ptr5 != NULL)
    {
        printf("\n%d", ptr5-> data);
        //printf("\n%d", ptr -> next);
        ptr5 = ptr5-> next;
    }
    

}    
    