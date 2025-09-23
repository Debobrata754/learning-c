//Q43.Write a fucntion swap two numers using pointers.
#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("After swapping a = %d, b = %d\n",a,b);
    return 0;
}