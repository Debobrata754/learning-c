#include<stdio.h>
int main(){
    int n; 
    while(n>1){
        printf("Enter a number:");
    scanf("%d",&n);
    if(n%7==0){
        break;
    }   
}
printf("Thanku!!\n");
return 0;
}