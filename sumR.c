#include<stdio.h>
//recursive function
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1=sum(n-1);
    int sumN=sumNm1+n;
    return sumN;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int SUM=sum(n);
    printf("Sum is %d\n",SUM);
    return 0;
}