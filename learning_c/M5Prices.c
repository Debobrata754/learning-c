#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr = (float*)malloc(5 * sizeof(float));

    ptr[0] = 19.8;
    ptr[1] = 45.87;
    ptr[2] = 78.96;
    ptr[3] = 65.98;
    ptr[4] = 100.9;

    for(int i = 0; i < 5; i++){
        printf("%f\n",ptr[i]);
    }
    return 0;
}