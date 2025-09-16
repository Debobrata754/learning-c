#include<stdio.h>
int main()
{   //Create a variable
    int age=22;
    //Create a pointer and store address of that variable
    int *ptr=&age;
    //Access the value using pointer
    int _age=*ptr;
    //address
    printf("%p\n",&age);
   // printf("Address is %u\n",&age);
    printf("Address is %p\n", ptr);//To print address stored in a pointer use %p.
    printf("The age is %d\n",_age);
    
    printf("%d\n",age);//print the value of the varable

    printf("%d\n",*ptr);//print the value at the address stored in pointer

    printf("%d\n",*(&age));//print the value at the address of age

    return 0;
}
