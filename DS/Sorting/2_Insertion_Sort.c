#include <stdio.h>
int printarr(int arr[], int n){
    printf("Printng array.....\n");
    for(int i = 0; i<n;  i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void sort(int arr[], int n){
    for (int i = 1; i< n; i++){
        int cur = arr[i];
        int pre = i-1;        
        while(pre >= 0 && arr[pre] > cur){
            arr[pre + 1] = arr[pre];
            pre--;
        }
        arr[pre+1] = cur;
        // printarr(arr, n);
    }
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
    return 0;
}