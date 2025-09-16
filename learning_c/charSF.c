#include<stdio.h>
#include<string.h>
void charPresent(char str[],char ch){
    int find=0;
    for(int i=0; str[i]!='\0';i++){
        if(str[i] == ch){
            find=1;
            break;
        }

    }
    if(find==1){printf("Yes.\n");}
    else{printf("No.\n");}
    return;
}
int main(){
    char str[100];
    char ch = 'a';
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    charPresent(str,ch);
    return 0;

}