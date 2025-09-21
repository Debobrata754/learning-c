//Q31.Find the length of  a string without using strlen() function.
#include<stdio.h>
int main(){
    char str[] = "Hello World";
    int i = 0,length = 0;
    while(str[i] != '\0'){
        length++;
        i++;
    }
    printf("Length of the string is %d\n",length);
    return 0;
}