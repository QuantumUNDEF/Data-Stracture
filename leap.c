// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
  
    int year; 
    printf("Enter the year: ");
    scanf("%d", &year);
    if((year%400 == 0) ||(year %4 ==0 && year%100 != 0)){
        printf("Leap Year\n");
    }
    else{
      printf("Not a leap year\n");
    }
    return 0;
}