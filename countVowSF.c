#include<stdio.h>
#include<string.h>
int countVowles(char str[]){
    int count = 0;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' 
            ||str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' ||str[i] == 'O' ||str[i] == 'U'){
                count++;
            }
    }
    return count;
}
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    printf("Number of vowles : %d\n",countVowles(str));
    return 0;
}