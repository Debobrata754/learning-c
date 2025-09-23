//Q50.Write a program to read and write data to a file.
#include<stdio.h>
int main(){
    FILE *fptr;
    char ch;
    fptr = fopen("assignment/myfile.txt","r+");
    ch = fgetc(fptr);
    while(ch != EOF){
        printf("%c",ch);
        ch = fgetc(fptr);
    }
    fputs("Hello!!", fptr);
    fclose(fptr);
    printf("\n");
    return 0;
}