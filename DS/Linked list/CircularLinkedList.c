#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
}; // remember the comma
struct Node* insertAtFirst(struct Node *head, int data){
    struct Node* newHead = malloc(sizeof(struct Node));
    newHead -> data = data;
    struct Node* temp = head;
    while(temp-> next != head){
        temp = temp -> next;
    }
    temp -> next = newHead;
    newHead ->next = head;
    head = newHead;
    printf("%d, is inserted at beginning\n", data);
    return head;
}
void printCirList(struct Node *head){
    struct Node *ptr = head;
    do{
        printf("%d ->",ptr->data);
        ptr = ptr -> next;
    }while(ptr!= head);
    printf("Return to Head.\n");
}
void InsertAtEnd(struct Node * head, int data){
    struct Node * end = malloc(sizeof(struct Node));
    end -> data = data;
    struct Node * temp = head;
    while(temp -> next != head){
        temp = temp -> next;
    }
    temp -> next = end;
    end -> next  = head;

}
int len(struct Node*head){
    int count = 1;
    struct Node * ptr = head;
    while(ptr->next!= head){
        count++;
        ptr = ptr-> next;
    }
    return count;
}
struct Node * insertAtPosition(struct Node* head, int data, int pos){
    if (pos < 1 || pos > len(head) + 1) {
        printf("Invalid Position.\n");
        return head;
    }
    struct Node * newNode = malloc(sizeof(struct Node));
    newNode -> data = data;
    if (pos == 1) {
        return insertAtFirst(head, data);
    }
    struct Node * ptr = head;
    int i;
    for (i =1; i< pos-1; i++){
        ptr = ptr->next;
    };
    newNode->next = ptr->next;
    ptr->next = newNode;
    if (pos == len(head) + 1) {
        newNode->next = head;
    }
    printf("%d inserted at position %d\n", data, pos);
    return head;
}


int main() {
    struct Node *head = malloc(sizeof(struct Node));
    head -> data = 1;
    head -> next = head;
    struct Node *current = malloc(sizeof(struct Node));
    current -> data = 2;
    current -> next = head;
    head -> next = current;
    current = malloc(sizeof(struct Node));
    current -> data = 3;
    current -> next = head;
    head -> next -> next = current;
    printCirList(head);
    head = insertAtFirst(head, 4);
    head = insertAtFirst(head, 5);
    InsertAtEnd(head, 12);
    printCirList(head);
    printf("Length is : %d\n", len(head));
    head = insertAtPosition(head, 55, 2);
    
    printCirList(head);
    head = insertAtPosition(head, 1, 0);
    printCirList(head);
    head = insertAtPosition(head, 2, 6);
    printf("Length is : %d\n", len(head));
    head = insertAtPosition(head, 2, 9);
    printf("Length is : %d\n", len(head));
    printCirList(head);
    
    return 0;
}
