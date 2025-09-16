//Q6.WAP to check whether a number is even or odd.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n % 2 == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    return 0;
}