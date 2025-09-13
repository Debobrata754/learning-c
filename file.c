// #include<stdio.h>

// int main(){
//     FILE *fptr;//file pointer to hold the address of file
//     char ch;//variable to hold the character read from file
//     fptr = fopen("file.txt","r");//open file in read mode
//     fscanf(fptr, "%c", &ch);//read a character from file
//     printf("Character read from file: %c\n", ch);//print the character
//     fscanf(fptr, "%c", &ch);
//     printf("Character read from file: %c\n", ch);
//      fscanf(fptr, "%c", &ch);
//     printf("Character read from file: %c\n", ch);
//      fscanf(fptr, "%c", &ch);
//     printf("Character read from file: %c\n", ch);
//      fscanf(fptr, "%c", &ch);
//     printf("Character read from file: %c\n", ch);
//     fclose(fptr);//close the file
//     return 0;
// }  
//Use of EOF in file handling
//EOF is a constant in C that indicates the end of a file.
#include<stdio.h>

int main(){
    FILE *fptr;
    char ch;
    fptr = fopen("file.txt","r");
    ch = fgetc(fptr);//read a character from file
    while(ch != EOF){//loop until end of file is reached
        printf("%c", ch);
        ch = fgetc(fptr);//read next character from file
        }
    printf("\n");
    fclose(fptr);
    return 0;
}
