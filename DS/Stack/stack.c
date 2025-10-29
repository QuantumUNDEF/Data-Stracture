#include <stdio.h>
#define MAX 5
int stack[MAX];
int isFull(int top)
{
    if(top == MAX -1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main()
{
    int top = 4;
    if(isFull(top))
    {
        printf("Stack Overflow");
    }
    else
    {
        printf("Stack is not Full");
    }
    return 0;
}