#include<stdio.h>
#include<string.h>
struct complex{
    int real,img;//img is imaginary part.
};
int main(){
    struct complex c1 = { 3, 5};
   // struct complex c2 = { 4, 5};
    struct complex *ptr = &c1;
    printf("real part is = %d\n", ptr->real);
    printf("img part is = %d\n", ptr->img);
    return 0;
}