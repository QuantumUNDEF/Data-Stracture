#include <stdio.h>
int main()
{
  int num,temp,rem, sum;
  printf("Enter a Number: ");
  scanf("%d", &num);
  temp = num;
  while(temp > 0){
    rem = temp%10;
    sum = sum + (rem*rem*rem);
    temp = temp/10;
    
  }
  if (sum == num){
    printf("%d is a NANRCISSISTIC NUMBER.\n", num);
  }
  else{
    printf("%d is not a NARCISSISTIC NUMBER.\n", num);
  }
}