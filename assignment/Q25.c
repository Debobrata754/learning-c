//Q25.Reverse an array without using another array.
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5};
    for(int i = 0,j = 4; i < j; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i = 0; i < 5 ; i++){
       printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}