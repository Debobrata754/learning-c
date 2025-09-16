#include<stdio.h>
int main(){
    //Create a variable
    int price = 100;
    //Create a pointer and store address of that variable
    int *ptr = &price;
    //Create anther pointer and store address of first poiter
    int **pptr = &ptr;
    //Print the value at the address stored in 2nd pointer
    printf("Price is : %d\n", **pptr);

    return 0;
    
}