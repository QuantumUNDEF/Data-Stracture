#include <stdio.h>
int main()
{
  int num,temp,rem, sum;
  printf("Enter a Number: ");
  scanf("%d", &num);
  temp = num;
  while(temp > 0){
    rem = temp%10;
    sum = sum + rem;
    temp = temp/10;
    
  }
  if (num%sum == 0){
    printf("%d is a HARSHAD NUMBER.\n", num);
  }
  else{
    printf("%d is not a HARSHAD NUMBER.\n", num);
  }
  }