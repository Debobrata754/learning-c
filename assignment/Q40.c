//Q40.Count the number of words in a string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int count = 1;
    printf("Enter a string: ");
    fgets(str,100,stdin);
    for(int i = 0 ; i < strlen(str) ; i++){
        if(str[i] == ' ' && str[i+1] != ' '){
            count++;
        }
    }
    printf("Number of words: %d\n",count);
    return 0;
}