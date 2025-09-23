//Q34.Check if two strings are equal or not.
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    printf("Enter first string: ");
    fgets(str1,100,stdin);
    printf("Enter second string: ");
    fgets(str2,100,stdin);
    //To compare two strings we use strcmp() function in C.
    if( strcmp( str1 , str2) == 0){
        printf("Strings are equal\n");
    }
    else{
        printf("Strings are not equal\n");
    }
    return 0;
}