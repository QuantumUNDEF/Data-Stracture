#include <stdio.h>
#include <stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull(struct queue *q){
    if(q-> r == q->size -1){
        return 1;
    }
    return 0;
    // else{
    //     return 0;
    // }
}
int isEmpty(struct queue *q){
    if(q->r == q->f){
        return 1;
    }
    return 0;
    // else{
    //     return 0;
    // }
}
void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("Queue OverFlow");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
    }
}
int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("Queue is full");
    }
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
int main(){
    struct queue q;
    q.size = 100;
    q.f = -1;
    q.r = -1;
    q.arr = (int*)malloc(q.size*sizeof(int));
    if(isEmpty(&q)){
        printf("\nQueue is Empty");
    }
    enqueue(&q, 12);
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 18);
    if(isEmpty(&q)){
        printf("\nQueue is Empty");
    }
    printf("\ndequeueing Element!! %d",dequeue(&q));
    printf("\ndequeueing Element!! %d",dequeue(&q));
    printf("\ndequeueing Element!! %d",dequeue(&q));
    printf("%d", dequeue(&q));
    printf("%d", dequeue(&q));
    if(isEmpty(&q)){
        printf("\nQueue is Empty");
    }
    
    return 0;
}