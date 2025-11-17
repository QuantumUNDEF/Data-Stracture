/* binary search is a searching algo that work on SSS -> sorted search space
    it repeatly divides into two halfs to find the taget value or optimal answer in log(n)<- Time complexity
    condition 1. Data stracture must be sorted 
              2. access to the any element of DS should be 
              
              
*/
#include <stdio.h>
int binSearch( int arr[], int size ,int n){
    int low = 0;
    int high = size-1;
    int mid;
    while(low <= high){
        mid = (low + high )/2;
        if( arr[mid] == n){
            printf("Element %d found\n", n);
            return mid;
        }else if(n<arr[mid]){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    printf("Element not found");
    return -1 ;
}
int main(){
    int size = 7;
    int arr[7] = {1, 2,3,4 ,5,6, 7};// Array must be sorted
    int element = 3;
    int index = binSearch(arr, size,element);
    printf("Index: %d", index);
    return 0;
}
