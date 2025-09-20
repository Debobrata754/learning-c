//Q20.Check whether a number is prime or not.
#include<stdio.h>
int main(){
    int n,num = 1;
    printf("Enter a number : ");
    scanf("%d",&n);
        for(int i = 2; i * i < n; i++){
            if(n % i == 0){
            num = 0;
            break;
         }
        }
        if(num == 1){
            printf("%d is a prime number.\n",n);
        }
        else{
            printf("%d is not a prime number.\n",n);
        }
    return 0;
}