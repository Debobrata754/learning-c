#include<stdio.h>
#include<string.h>
//How to use typedef
/*typedef struct name{
    details
}short-name;*/
typedef struct ComputerEngineeringStudent{
    int roll;
    float cgpa;
    char name[100];
}coe;
int main(){
    coe s1;//Replaced struct comp...1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name, "Dip");
    printf("Student name is %s\n", s1.name);

    return 0;
}