#include<stdio.h>
void printStr(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c",arr[i]);
    }
    printf(" ");
}
int countLen(char arr[]){
    int count =0;
    for(int i=0; arr[i] != '\0';i++){
        count++;
    }
    return count-1;
}
int main(){
    char name[100];
    printf("Enter your name: ");
    fgets(name , 100, stdin);
    printf("length is: %d\n",countLen(name));
    printStr(name);
    return 0;
}