//Q13.Print the sum of first N natural numbers.
#include<stdio.h>
int main(){
    int n, a = 0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        a += i;
    }
    printf("Sum of first %d natural numbers is %d\n",n,a);
    return 0;
}