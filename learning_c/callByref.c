#include<stdio.h>
//call by reference using ponter
int _square(int *n){
    *n = (*n) * (*n);
    return *n;
}
//While using call by ref it changes the actual value of the variable
int main(){
    int num = 5;
    printf("Number is : %d\n", num);
    _square(&num);
    printf("Square is : %d\n", num);
    return 0;
}