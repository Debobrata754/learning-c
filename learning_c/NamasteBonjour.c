#include<stdio.h>
void printNamaste(){
    printf("Namaste!!\n");
};
void printBonjour(){
    printf("Bonjour!!\n");
};
int main(){
    char ch;
    printf("Enter 'i' for indian and 'f' for French:");
    scanf("%c",&ch);

    if(ch=='i'){
        printNamaste();
    }
    else if(ch=='f'){
        printBonjour();
    }
    else{
        printf("Not valid.\n");
    }
    return 0;
}