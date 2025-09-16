//Q17.Print Fibonacci series up to N terms. 
#include<stdio.h>
void fibonnaci(int n){
    int n1 = 0,n2 = 1,nextNum;
    printf("Fibonacci Series : \n");
    for(int i = 1;i <= n;i++){
        printf("%d\t",n1);
        nextNum = n1 + n2;
        n1 = n2;
        n2 = nextNum;
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    fibonnaci(n);
    return 0;
    }
