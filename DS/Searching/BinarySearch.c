/* binary search is a searching algo that work on SSS -> sorted search space
    it repeatly divides into two halfs to find the taget value or optimal answer in log(n)<- Time complexity
    condition 1. Data stracture must be sorted 
              2. access to the any element of DS should be 
              
              
*/
#include <stdio.h>
int binSearch( int arr[], int low, int high, int n){
    low = 0;
    high = high;
    int mid;
    while(low < high){
        mid = (low + high )/2;
        if( arr[mid] == n){
            printf("Element found");
            break;
        }else if(n<arr[mid]){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return mid;
}
int main(){
    int arr[7] = {1, 2,3,4 ,5,6, 7};
    int index = binSearch(arr, 0, 6, 7);
    printf("%d", index);
    return 0;
}
