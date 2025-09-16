#include<stdio.h>
#include<string.h>
struct vector{
    int x,y;
};
void calSum(struct vector v1,struct vector v2,struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("Sum of vectors is %di+%dj\n",sum.x,sum.y);
}
int main(){
    struct vector v1 = { 3, 5};
    struct vector v2 = { 4, 10};
    struct vector sum = {0};
    calSum(v1,v2,sum);
    return 0;
}