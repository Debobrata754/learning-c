#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;

    printf("Enter number of elements : ");
    scanf("%d",&n);

    ptr = (int*)calloc(n,sizeof(int));

    for(int i = 0; i < n ; i++){
        printf("%d\t",ptr[i]);
    }
    printf("\n");

    return 0;
}