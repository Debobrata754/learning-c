#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 1;
    }
    int factNm1=fact(n-1);
    int factN=factNm1*n;
    return factN;
}
int main (){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int Fact=fact(n);
    printf("Factorial of %d is %d\n",n,Fact);
    return 0;
}