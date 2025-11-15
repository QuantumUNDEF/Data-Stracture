 #include <stdio.h>
#define size 15
int main(){
    //Declear and Initialization of array
    int arr[size]={10,33,45,72,82};
    int i ,pos=2,value=90,n=5;
    printf("Original array: ");
    for (int i=0;i<size;i++){
    printf("%4d",arr[i]);
    }
    for (int i=5;i>pos-1;i--){
        arr[i]=arr[i-1];
        if (i==2){
            arr[i]=value;       
        }
    }
    printf("\n\nUpdated Array: ");
    for (int i=0;i<size;i++){
    printf("%4d",arr[i]);
    }
    }