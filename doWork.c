#include<stdio.h>
int doWork(int a, int b, int *sum, int *pro, int *avg){
    *sum = a + b;
    *pro = a * b;
    *avg = (a + b) / 2;
}
int main(){
    int a = 5, b = 3;
    int sum, pro, avg;
    doWork( a, b, &sum, &pro, &avg);
    printf("sum = %d\npro = %d\navg = %d\n", sum, pro, avg);
    return 0;
}