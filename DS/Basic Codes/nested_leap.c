// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    // Write C code here
  
    int year; 
    printf("Enter the year: ");
    scanf("%d", &year);
    if(year%4 == 0)
    {
      if(year % 100 == 0)
      {
        if( year%400 == 0)
        {
          printf("%d, is leap year.", year);
        }
        else
        {
          printf("%d, not a leap year.", year);
        }
      }
      else
      {
        printf("%d, Leap Year", year);
      }
    }
    else{
      printf("Not a leap year\n");
    }
    return 0;
}