#include<stdio.h>
int calFib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    int fibNm1 = calFib(n-1);
    int fibNm2 = calFib(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}
int main(){
    int num;
    printf("Enter a number :" );
    scanf("%d",&num);
    printf("Fibonacci sequence is %d\n",calFib(num));
    return 0;
}