#include<stdio.h>
//sci=Science,math=Mathametics,sans=Sanskrit.
float calPercentage(int sci,int math,int sans)
{
   return (sci+math+sans)/3;
}
int main(){
    int sci,math,sans;
    printf("Enter marks of scence: ");
    scanf("%d",&sci);
    printf("Enter marks of math: ");
    scanf("%d",&math);
    printf("Enter marks of sans: ");
    scanf("%d",&sans);
    printf("Your percentage is %f\n",calPercentage(sci,math,sans));
    return 0;
}