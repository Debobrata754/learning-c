//Q32.Copy from one string to another string without using strcpy() function.
#include<stdio.h>
int main(){
    char str1[] = "Hello World";
    char str2[100];
    int i = 0;
    while(str1[i] != '\0'){
        str2[i] = str1[i];
        i++;
    }
    printf("Copied string is: %s\n",str2);
    return 0;
}