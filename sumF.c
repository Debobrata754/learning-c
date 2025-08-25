#include<stdio.h>
int Sum(int a,int b){
    return a+b;
};
int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    int s=Sum(a,b);//Here a and b are argument/actual parameter
    printf("Sum is: %d\n",s);
    return 0;
}