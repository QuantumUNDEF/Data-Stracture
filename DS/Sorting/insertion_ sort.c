#include <stdio.h>
void sort(int arr[], int n){
    int i, j,temp;
    for (i = 1; i<n; i++){
        temp = arr[i];
        j = i-1;
        while(arr[j]> temp && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
    arr[j+1] = temp;
    }
}
int printarr(int arr[], int n){
    printf("Printng array.....\n");
    for(int i = 0; i<n;  i++){
        printf("%d ", arr[i]);
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
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    inputarr(arr, size);
    printarr(arr, size);
    int choice = 0;
    printf("Do you want to sort the array: (0/1)");
    scanf("%d", &choice);

    if(choice){
        printf("Array is sorted\n");
        sort(arr, size);
    }else{
        printf("Array is saved as it is.\n");
    }
    printarr(arr, size);
    return 0;
}