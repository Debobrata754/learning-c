#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    //1st student details
    //struct student s1 = {"Debobrata Paul", 10, 8.5}; It's also correct method.
    struct student s1;
    strcpy(s1.name,"Debobrata Paul");
    s1.roll = 10;
    s1.cgpa = 8.5;

    printf("Studen name is = %s\n", s1.name);
    printf("Student roll no = %d\n", s1.roll);
    printf("Student cgpa is = %f\n", s1.cgpa);
    //2nd student details
    struct student s2;
    strcpy(s2.name,"Amit Roy");
    s2.roll = 11;
    s2.cgpa = 8.3;

    printf("Studen name is = %s\n", s2.name);
    printf("Student roll no = %d\n", s2.roll);
    printf("Student cgpa is = %f\n", s2.cgpa);
    //3rd student details
    struct student s3;
    strcpy(s3.name,"Dipro Karmakar");
    s3.roll = 12;
    s3.cgpa = 8.8;

    printf("Studen name is = %s\n", s3.name);
    printf("Student roll no = %d\n", s3.roll);
    printf("Student cgpa is = %f\n", s3.cgpa); 

    return 0;
}