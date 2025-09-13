#include<stdio.h>

int main(){
    FILE *fptr;
    int ch;
    fptr = fopen("file5int.txt","r");
    fscanf(fptr, "%d", &ch);
    printf("%d\n",ch);
    fscanf(fptr, "%d", &ch);
    printf("%d\n",ch);
    fscanf(fptr, "%d", &ch);
    printf("%d\n",ch);
    fscanf(fptr, "%d", &ch);
    printf("%d\n",ch);
    fscanf(fptr, "%d", &ch);
    printf("%d\n",ch);
    fclose(fptr);
    return 0;
}