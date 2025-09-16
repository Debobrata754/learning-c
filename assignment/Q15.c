//Q15.Reverse a given number.
#include<stdio.h>
int main(){
    int n,rev = 0,num;
    printf("Enter a number: ");
    scanf("%d",&n);
    num = n;
    while(num != 0){
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    printf("%d reverse is %d\n",n,rev);
    return 0;
}