#include<stdio.h>
int main(){
    int a = sizeof(int);
    int b = sizeof(char);
    int c = sizeof(float);
    printf("size of int : %d\n", a);
    printf("size of char : %d\n", b);
    printf("size of float : %d\n", c);
    return 0;
}