//Q37.Reverse a string without using strrev() function.
#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Hello";
    int len = strlen(str);
    char revstr[100];
    for(int i = 0; i < len ; i++){
        revstr[i] = str[len - i - 1];
    }
    printf("Reversed string: %s\n",revstr);
    return 0;
}