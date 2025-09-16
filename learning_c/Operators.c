#include<stdio.h>
int main(){
    //Always declare a variable before using it.
    int a = 22;
    int b = a;
    int c = b * 6;
    int d = 1 , e;
    printf("c=%d\n",c); 

    int x , y , z;
    x=y=z=1;
    printf("x=%d\n",x);
//Using &&(AND) , ||(OR) and !(NOT) operators
    //Use of AND operator
    int m,n;
    printf("Enter m:");    
    scanf("%d",&m);
    printf("Enter n:");
    scanf("%d",&n);
    if(m > n && n < 10){
        printf("%d\n",m - n);
    }
    else{
        printf("%d\n",m + n);
    }
    //Use of OR operators
    int M,N;
    printf("Enter M:");
    scanf("%d",&M);
    printf("Enter N:");
    scanf("%d",&N);
    
    if(M > N || N < 10){
        printf("%d\n",M -N);
    }
    else{
        printf("%d\n",M + N);
    }
    //Use of NOT operators
    int p,q;
    printf("Enter p:");
    scanf("%d",&p);
    printf("Enter q:");
    scanf("%d",&q);
    if(p!=q){
        printf("p nd q are not equal\n");
    }
    else{
        printf("p nd q are equal\n");
    }

} 