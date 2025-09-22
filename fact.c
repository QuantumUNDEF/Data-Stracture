#include <stdio.h>
int main ()
{
  printf("Enter the Number: ");
  int fact = 1, num;
  scanf("%d", &num);
  for(int i = 1; i<=num; i++){
    fact *=i;
  }
  printf("Factorial of %d = %d\n", num, fact);
  return 0;
}