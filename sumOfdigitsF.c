#include<stdio.h>
int calSum(int n){
    int sum=0;
    while(n>0){
    sum=sum+n%10;
    n=n/10;}
    return sum;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int Sum=calSum(n);
    printf("Sum is %d\n",Sum);
    return 0;
}