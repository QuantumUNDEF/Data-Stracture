#include <stdio.h>
void sort(int arr[], int size){ // selection sort
    int min, temp;
    for(int i = 0; i<size; i++){
    min =i;
        for(int j = i+1; j< size; j++){
            if (arr[min] > arr[j]){
                min = j;
            }
        }
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
    }
}
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
int main(){
    int size;
    printf("Enter size: \n");
    scanf("%d", &size);
    int arr[size];
    inputarr(arr, size);
    printarr(arr, size);
    sort(arr, size);
    printarr(arr, size);
    return 0;
}