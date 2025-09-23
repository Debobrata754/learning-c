//Q46.Write a program to print address of a variable using pointer.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int *ptr = &n;
    printf("Address of %d is: %p\n",n,ptr);
    return 0;
}
