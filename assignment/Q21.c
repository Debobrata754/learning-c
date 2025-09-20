//Q21.Read an a array of N integers and print them.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d\t",arr[i]);    
    }
    printf("\n");
    return 0;
}