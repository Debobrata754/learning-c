//Q24.Calculte the sum of elements in an array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];  
    }
    printf("The sum of element in this array is %d.",sum);
    printf("\n");
    return 0;
}
