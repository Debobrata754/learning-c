#include<stdio.h>
int main(){
    int n;
    while(n>1){ 
        printf("Enter a number:");
        scanf("%d",&n);
        if(n%2!=0){
            break;
        }
    }
printf("Thanku!!");
return 0;
}