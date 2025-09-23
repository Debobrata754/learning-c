//Q47.Write a program to swap two numbers using pointers.
#include<stdio.h>
int main(){
    int a,b;printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    int *ptr1,*ptr2,temp;
    ptr1 = &a;
    ptr2 = &b;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("After swapping: a = %d, b = %d\n",a,b);
    return 0;
}