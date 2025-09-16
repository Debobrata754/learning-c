#include<stdio.h>
#include <math.h>  // For mathematical functions like sqrt(), pow(), sin(), etc.
void calSquare(int a){
   printf("Square is: %f\n",pow(a,2));   
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    calSquare(n);
    return 0;
}