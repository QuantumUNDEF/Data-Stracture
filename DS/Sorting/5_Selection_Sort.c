#include <stdio.h>
void sort(int arr[], int size){ // selection sort
    int minIdx;
    for(int i = 0; i<size-1; i++){
        minIdx =i;// setting min index to the first element of the unsorted array
        for(int j = i+1; j < size; j++){
            if (arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        // Swaping
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
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
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    inputarr(arr, size);
    printarr(arr, size);
    sort(arr, size);
    printarr(arr, size);
    return 0;
}