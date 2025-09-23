//Q36.Count the number of vowles and consonants in a string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int vowles = 0, consonants = 0,len;
    printf("Enter a string: ");
    fgets(str,100,stdin);
    len = strlen(str);
    for(int i = 0; i < len ; i++){
        if( (str[i] >= 'a' && str[i <= 'z']) || (str[i] >= 'A' && str[i <= 'Z']) ){
            if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
                vowles++;
            }
            else{
                consonants++;
            }
    }
}
    printf("Vowles: %d, Consonants: %d\n",vowles,consonants);
    return 0;
}