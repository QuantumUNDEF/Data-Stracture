#include <stdio.h>
int printarr(int arr[], int n){
    printf("Printng array.....\n");
    for(int i = 0; i<n;  i++){
        printf("%4d", arr[i]);
    }
    printf("\n");
}
void inputarr(int arr[], int n ){
    printf("Input Element: \n");
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void sort(int arr[], int size){
    for(int j = 0; j < size; j++){
        for(int i = 1 ; i<=size+1; i++){
            if(arr[i-1]>arr[i]){
                int temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;
            }
        }
    }

}
int main(){
    int n;
    printf("Enter size: \n");
    scanf("%d", &n);
    int arr[n];
    inputarr(arr, n);
    printarr(arr, n);
    sort(arr, n);
    printarr(arr, n);
    

}