#include<stdio.h>
#include<string.h>
void salting(char password[]){
    char salt[] = "123";
    char newPass[150];
    strcpy(newPass,password);
    strcat(newPass,salt);
    puts(newPass);
}

int main(){
    char password[100];
    printf("Enter your password: ");
    scanf("%s",password);
    salting(password);
    return 0;
}
