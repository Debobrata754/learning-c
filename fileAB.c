#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("fileAB.txt","r");//open file in read mode

    int a,b;
    //scan two integers from file
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);

    fclose(fptr);//close the file after scaning

    fptr = fopen("fileAB.txt","w");//again open the file in write mode
    fprintf( fptr, "%d", a+b);//write the sum of two integers in file
    fclose(fptr); 
    return 0;
}