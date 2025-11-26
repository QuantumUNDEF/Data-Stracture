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
    for(int i = 0; i < size-1; i++){
        printf("%d\n", i);
        for(int j = 0 ; j < size-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            // printarr(arr, size);
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