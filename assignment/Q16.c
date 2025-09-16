//Q16.Check if a number is palindrome or not.
#include<stdio.h>
int main(){
    int num,rev = 0,n;
    printf("Enter a number : ");
    scanf("%d",&num);
    n = num;
    while(n != 0){
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if(rev == num){
        printf("%d is a palindrome number\n",num);
    }
    else{
        printf("%d is not palindrome number.\n",num);
    }
    return 0;
}