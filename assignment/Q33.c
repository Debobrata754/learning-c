//Q33.Concatinate two strings without using strcat() function.
#include<stdio.h>
int main(){
    char str1[] = "Hello";
    char str2[] = " World";
    char str3[100];
    int i = 0,j = 0;
    while(str1[i] != '\0'){
        str3[i] = str1[i];
        i++;
    }
    while(str2[j] != '\0'){
        str3[i] = str2[j];
        i++;
        j++;    
    }
    printf("Concatenated string is: %s\n",str3);
    return 0;
}