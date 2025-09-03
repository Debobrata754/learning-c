#include<stdio.h>
void printStr(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c",arr[i]);
    }
    printf(" ");
}
int main(){
    char firstName[] = "Debobrata";
    char lastName[] = "Paul";
    printStr(firstName);
    printStr(lastName);
    printf("\n");
    return 0;
}