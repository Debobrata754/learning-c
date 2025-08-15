#include <stdio.h> // Standard input-output library

int main() {
    int a,b=10;
    printf("Enter a number:");
    scanf("%d",&a); // how to generate integer varialbe
    printf("Hello, World!\n"); // Print message to console
    if(a<20){
        printf("%d\n",a+b);
    }
    else{
        printf("%d\n",a-b);
    }
    return 0; // Indicate successful execution
}
//Video link:https://www.youtube.com/watch?v=irqbmMNs2Bo
