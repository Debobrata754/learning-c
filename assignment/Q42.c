//Q42.Write a function to check prime numbers.
#include<stdio.h>
void checkPrime(int n){
    int flag = 0;
    for(int i = 2 ; i <= n/2 ; i++){
        if(n % i == 0){
            flag++;
            break;
        }
    }
    if(flag == 0){
        printf("%d is a prime number\n",n);
    }
    else{
        printf("%d is not a prime number\n",n);
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    checkPrime(n);
    return 0;
}