#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("odd1tN.txt", "w");

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        if(i % 2 != 0){
            fprintf(fptr, "%d\t", i);//print odd numbers in odd1tN.txt file
        }
    }
    fclose(fptr);
    return 0;
}