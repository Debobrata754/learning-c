//Q44.Write a fucntion to find GCD and LCM of two numbers.
#include<stdio.h>
void calGcdLcm(int a,int b){
    int gcd = 1,lcm = 1;
    for(int i = 1 ; i <= a && i <= b ; i++){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    lcm = a * b / gcd;
    printf("GCD: %d\n",gcd);
    printf("LCM: %d\n",lcm);
}
int main(){
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    calGcdLcm(a,b);
    return 0;
}