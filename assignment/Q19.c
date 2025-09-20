//Q19.Print all prime numbers between 1 to 100.
#include<stdio.h>
int main(){
    printf("Prime between 1 to 100.\n");
    for(int i = 2; i <= 100; i++){
        int num = 1;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                num = 0;
                break;
            }
        }
        if(num == 1){
            printf("%d\t",i);
        }
    }
    return 0;
}