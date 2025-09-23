//Q48.Write a program to find sum of array elements using pointer.
#include<stdio.h>
int main(){
    int arr[5] = { 1 , 2 , 3 , 4 , 5 };
    int sum = 0, *ptr = arr;
    for(int i = 0 ; i < 5 ; i++){
        sum += *ptr;
        ptr++;
    }
    printf("Sum of array elements is: %d\n",sum);
    return 0;
}