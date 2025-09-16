#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;

    ptr = (int*)calloc(5,sizeof(int));

    for(int i = 0; i < 5 ; i++){
        printf("%d\t",ptr[i]);
    }
    printf("\n");

    ptr = realloc(ptr,8 * sizeof(int));

    for(int i = 0; i < 8 ; i++){
        printf("%d\t",ptr[i]);
    }
    printf("\n");
    free(ptr);

    return 0;
}