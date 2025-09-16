//Q2.WAP to take two integers as input and print their sum.
#include<stdio.h>
int main(){
    int a,b,sum;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);
    sum = a + b;
    printf("Sum of %d and %d is %d\n",a,b,sum);
}