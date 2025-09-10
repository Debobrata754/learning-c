#include<stdio.h>
#include<string.h>
//user defined
//defining a structure data type
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
   struct student s1;
   s1.roll = 190;
   s1.cgpa = 8.2;
   //s1.name = "Debobrata";"It's wrong method."
   strcpy(s1.name, "Debobrata Paul");//In string one can't assign a value...can copy a value.
   
   printf("Student name is = %s\n",s1.name);
   printf("Student roll no = %d\n", s1.roll);
   printf("Student cgpa is = %f\n", s1.cgpa);
   return 0;
}
