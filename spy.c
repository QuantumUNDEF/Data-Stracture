#include <stdio.h>
int main()
{
  int num,temp,rem, sum, mult =1;
  printf("Enter a Number: ");
  scanf("%d", &num);
  temp = num;
  while(temp > 0){
    rem = temp%10;
    sum +=(rem);
    mult *= rem;
    temp = temp/10;
    
  }
  if (sum == mult){
    printf("%d is a SPY NUMBER.\n", num);
  }
  else{
    printf("%d is not a SPY NUMBER.\n", num);
  }
  }