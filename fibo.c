#include <stdio.h>
int main()
{
  int first = 0, second = 1, n, next;
  printf("Enter the Series Length: ");
  scanf("%d", &n);
  printf("Fibonacci Series: \n");
  printf("%d, ",first);
  printf("%d, ",second);
  for(int i = 2 ; i< n; i++){
    next = first + second;
    printf("%d, ",next);
    first = second;
    second = next;
  }
  printf("\n");
}