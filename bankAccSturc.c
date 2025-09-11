#include<stdio.h>
#include<string.h>
typedef struct BankAccountInformation{
    char name[100];
    int accNo;
}bai;
int main(){
    bai a1 = {"John",123};
    bai a2 = {"Doe",124};
    bai a3 = {"Smith",125};

    printf("Account holder name = %s\n", a1.name);
    printf("Account number = %d\n", a1.accNo);
    printf("Account holder name = %s\n", a2.name);
    printf("Account number = %d\n", a2.accNo);
    printf("Account holder name = %s\n", a3.name);
    printf("Account number = %d\n", a3.accNo);
    return 0;

}
