#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int*)calloc(5,sizeof(int));//It reserve 5*4 = 20 bytes.  
                                        //using (int*) it creates int type pointer
    //to store data in pointer like this
    // ptr[0] = 1;
    // ptr[1] = 3;
    // ptr[2] = 5;
    // ptr[3] = 7;
    // ptr[4] = 9;

    for(int i = 0; i < 5 ; i++){
        printf("%d\t",ptr[i]);
    }
    printf("\n");

    return 0;
}