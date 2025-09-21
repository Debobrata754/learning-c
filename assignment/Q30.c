//Q30.Implement binary search in an sorted array.
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int element,low,high,mid,found = 0;
    printf("Enter the element to be searched: ");
    scanf("%d",&element);
    low = 0;
    high = n - 1;
    while(low <= high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            found = 1;
            break;
        }
        else if(arr[mid] < element){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(found == 1){
        printf("Element found at index %d\n",mid);
    }
    else{
        printf("Element not found\n");
    }
    return 0;
}