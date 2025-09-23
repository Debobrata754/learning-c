//Q38.Convert a string to uppercase withot using library function.
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    int len = strlen(str);
    for( int i = 0 ; i < len ; i++){
        if( str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
    printf("Uppercase string: %s\n",str);
    return 0;
}