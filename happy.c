#include <stdio.h>

int main() {
    int num,sum=0,rem,temp;
    printf("Enter your number: ");
    scanf("%d",&num);
    temp=num;
    while(sum!=1){
        while(temp>0){
            rem=temp%10;
            sum=rem*rem+sum;
            temp=temp/10;
          
        }
        if(sum==4){
            printf("not possible");
            break;
        }
        else{
            if (sum==1){
                printf("This number is a happy number");
            }
            else{
            temp=sum;
            sum=0;
            }
            
        }
    
    }}