#include<stdio.h>
int main(){
    for(int i=0;i<=10;i++){
        printf("%d\n",i);
    }
    for(char ch='a';ch<='z';ch++){
        printf("%c\n",ch);
    }
    int x=1;
    while(x<=5){
        printf("%d\n",x);
        x++;
    }
    return 0;
}