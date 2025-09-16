#include<stdio.h>
int main(){
    //Declaration of 2D array
    //store marks of 2 students in 3 subjects
    int marks[2][3];

    marks[0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 78;

    marks[1][0] = 90;
    marks[1][1] = 89;
    marks[1][2] = 78;

    printf("%d\n", marks[0][0]);
    return 0;

}