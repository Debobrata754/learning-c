#include<stdio.h>
float convTemp(float cel){
    return (cel*9/5+32);
}
int main(){
    int cel;
    printf("Enter tempareture in celsius: ");
    scanf("%d",&cel);
    float temp=convTemp(cel);
    printf("%d degree celsious is %f degree fahrenheit\n",cel,temp);
    return 0;
}