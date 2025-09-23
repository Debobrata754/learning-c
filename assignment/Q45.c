//Q45.Write a function to generate Fibonacci series.
#include<stdio.h>
void fibonacci(int n){
    int f1 = 0 , f2 = 1, temp;
    for(int i = 1 ; i <= n ; i++){
        printf("%d\t",f1);
        temp = f1;
        f1 = f2;
        f2 = temp + f1;
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}