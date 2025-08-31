#include<stdio.h>
//Array example
int main(){
    int marks[3];
    
    printf("Enter physics marks: ");
    scanf("%d",&marks[0]);

    printf("Enter math marks: ");
    scanf("%d",&marks[1]);

    printf("Enter chemistry marks: ");
    scanf("%d",&marks[2]);

    printf("Physics = %d\nMath = %d\nChemistry = %d\n", marks[0], marks[1], marks[2]);

    return 0;
}