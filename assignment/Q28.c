//Q28.Find second largest element in an array.
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int slargest = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
    }
    printf("Second largest element is %d\n", slargest);
    return 0;
}