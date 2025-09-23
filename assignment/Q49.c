//Q49.Define a structure for a student (name,roll,cgpa) and print details.
#include<stdio.h>
struct student{
    char name[50];
    int roll;
    float cgpa;
};
int main(){
    struct student s1 = {"Debobrata Paul",128,9};
    printf("Name: %s\nRoll: %d\nCGPA: %f\n",s1.name,s1.roll,s1.cgpa);
    return 0;
}