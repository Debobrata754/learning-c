#include<stdio.h>
#include<string.h>
struct address{
    int h_no;//h_no = house no
    int block;
    char city[100];
    char state[100];
};
int main(){
    struct address p1 = {1,7,"Kolkata","West Bengal"};
    struct address p2 = {5,7,"Narela","Delhi"};
    struct address p3 = {9,4,"Kolkata","West Bengal"};
    struct address p4 = {23,7,"Pitampura","Delhi"};
    struct address p5 = {86,5,"Barasat","West Bengal"};
    printf("address is : %d, %d, %s, %s\n",p1.h_no,p1.block,p1.city,p1.state);
    printf("address is : %d, %d, %s, %s\n",p2.h_no,p2.block,p2.city,p2.state);
    printf("address is : %d, %d, %s, %s\n",p3.h_no,p3.block,p3.city,p3.state);
    printf("address is : %d, %d, %s, %s\n",p4.h_no,p4.block,p4.city,p4.state);
    printf("address is : %d, %d, %s, %s\n",p5.h_no,p5.block,p5.city,p5.state);
    
    return 0;
}