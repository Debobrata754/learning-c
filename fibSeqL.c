#include<stdio.h>
int main(){
    int n,first=0,second=1,last;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==0){
        return first;
    }
    else if(n==1){
        return second;
    }
    else{
    for(int i=2;i<=n;i++){
         last = first + second;
         first = second;
         second = last;

        }
        printf("Fibonacci sequence is %d\n",last);
    }
    return 0;

}
