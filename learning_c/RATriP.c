// #include<stdio.h>
// int main(){
//     char ch = '*';
//     int row;
//     printf("enter number of rows: ");
//     scanf("%d",&row);
//     for(int i = 1; i <= row; i++){
//         for(int j = 1; j <= row; j++){
//             printf(" ");
//             if(j <= row - i){
//                 printf(" ");
//             }
//             else{
//                 printf("%c", ch);
//             }
//       //  for(int k = 1; k <= i; k++){printf("%c", ch);
//     }
//       printf("\n");
// }
//     return 0;
// }

#include <stdio.h>

int main() {
    char ch = '*';
    int row;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    int total_chars = row * (row + 1) / 2 + row * (row - 1) / 2; // total characters (spaces + stars + newlines)
    int current_row = 1;
    int printed_in_row = 0;

    for (int i = 1; i <= row * row; i++) {
        if (printed_in_row < row - current_row)
            printf(" ");
        else if (printed_in_row < row)
            printf("%c", ch);
        else {
            printf("\n");
            current_row++;
            printed_in_row = -1; // will become 0 after increment below
        }
        printed_in_row++;
    }

    return 0;
}
