#include<stdio.h>
int main(){
    int table[2][10];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j<10; j++){
            table[i][j] = (i + 2) * (j + 1);
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}