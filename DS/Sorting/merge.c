#include <stdio.h>
int printarr(int arr[], int n){
    printf("Printng array.....\n");
    for(int i = 0; i<n;  i++){
        printf("%4d", arr[i]);
    }
    printf("\n");
}
void merge(int arr[], int left, int mid, int right){
    int i, j, k, temp[100];
    i = left;
    j = mid+1;
    k = 0;
    while(i<=mid && j<=right){
        if(arr[i]<= arr[j]){
            temp[k] = arr[i];
            k++;i++;
        }else{
            temp[k] = arr[j];
            k++; j++;
        }
    }
    while(i<=mid){
        temp[k] = arr[i];
        k++; i++;
    }
    while(j<=right){
        temp[k] = arr[j];
        k++; j++;
    }
    for(int i = left; i<right; i++){
        arr[i] = temp[i];
    }

}
void devide(int arr[], int left, int right){
    if(left<right){
        int mid = (left + right)/2;
        devide(arr, left, mid);
        devide(arr, mid+1, right);
        merge(arr, left, mid, right);
    }}
    int main(){
        int arr[11] = {5, 4,6,8,9, 12, 17, 15, 14, 11, 0};
        for(int i = 0; i<=10; i++){
            printf("%d, ", arr[i]);
        }
        printf("\n");
        int size = sizeof(arr)/sizeof(int);
        devide(arr, 0, 10);
        for(int i = 0; i<11; i++){
            printf("%d, ", arr[i]);
        }
        
    return 0;
}