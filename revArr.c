#include<stdio.h>
int reverse(int arr[],int n){
    int firstVal, secondVal;
    for(int i = 0; i < n/2; i++){
        firstVal = arr[i];
        secondVal = arr[n-i-1];
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
    }
}
void printArr(int arr[],int n){
    for(int i = 0;i < n; i++){
        printf("%d\t", arr[i]);
    }
}
int main(){
    int arr[5] = { 1, 2, 3, 4, 5};
    
    reverse(arr, 5);
    printArr(arr, 5);
    printf("\n");
    return 0;
}