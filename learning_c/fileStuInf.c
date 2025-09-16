#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("stuInf.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter name : ");
    scanf("%s", name);
    printf("Enter age : ");
    scanf("%d", &age);
    printf("Enter cgpa : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "%s\t", name);
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%f", cgpa);

    fclose(fptr);
    return 0;
}