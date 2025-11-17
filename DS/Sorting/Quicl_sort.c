#include <stdio.h>
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low -1;
    for(int j = low; j<high; j++){
        if(arr[j]<= pivot){
            i++;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }

    }
    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return i+1;
}
void quicksort(int arr[], int low, int high){
    if (low>= high){
        return;
    }
    int pivot = partition(arr, low, high);
    quicksort(arr, low, pivot -1);
    quicksort(arr, pivot+1, high);
}
int main(){
    int arr[5] = {5, 3, 2,1 ,7};
    quicksort(arr, 0 ,4);
    for( int i = 0; i<5; i++){
        printf("%d", arr[i]);
    }
    
    return 0;
}