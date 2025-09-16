//Q14.Print sum of  digits of a number.
#include<stdio.h>
int main(){
    int n,sum = 0;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n > 0){
        while(n != 0){
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("Sum of digits : %d\n",sum);
   }
    else{
        printf("%d is not a valid number.\n",n);
    }
    
    return 0;
}