//Q41.Write a function to calculate factorial of a number.
#include<stdio.h>
void calFact(int n){
    int fact = 1;
    for(int i = 1 ; i <= n ; i++){
        fact  = fact * i;
    }
    printf("Factorial of %d is %d\n",n,fact);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    calFact(n);
    return 0;
}