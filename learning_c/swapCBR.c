#include<stdio.h>
//call by reference
void swap(int *x,int *y){
    int t = *x;
    *x = *y;
    *y = t;
}
int main(){
    int a = 3, b = 5;
    printf("a = %d & b = %d\n", a, b);
    swap(&a,&b);
    printf("a = %d & b = %d\n", a, b);
    return 0;
}