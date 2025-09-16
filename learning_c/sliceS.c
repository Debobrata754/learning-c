#include<stdio.h>
#include<string.h>
void slice(char str[], int ind1, int ind2){
    for(int i = ind1; i<=ind2 ;i++){
        printf("%c", str[i]);
    }

}
int main(){
    char str[100];
    int ind1,ind2;
    printf("Enter a string: ");
    fgets(str, sizeof(str),stdin);
    printf("Enter starting and ending index: ");
    scanf("%d %d", &ind1, &ind2);
    slice(str, ind1, ind2);
    return 0;
}