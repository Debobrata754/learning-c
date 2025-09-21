//Q29.Search for an element in an array(linear search).
#include<stdio.h>
int main(){
    int arr[] = {1,2,4,3,6,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int element,index = 0,found = 0;
    printf("Enter the element to be searched: ");
    scanf("%d",&element);
    for(int i = 0; i < n; i++){
        if( arr[i] == element){
            found = 1;
            index = i;
            break;
        }
        else{
            found = 0;
        }
    }
    if(found == 1){
        printf("Element found at index %d\n",index);
    }
    else{
        printf("Element not found\n");
    }
    return 0;
}