/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: dBXh45lLFunr
    ID: FYPUkKYkIqmc
    Compiler used: 20zmVn0LRwmo
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main() {
    //Input an integer (1-10)
    int num;
    printf("Enter a number(1-10): ");
    scanf("%d", &num);
    // Check if integer is in range of 1-10
    if (num < 1 || num >10 ){
        printf("This is not an integer between 1-10 \n");
        return 0;
    }
    
    //Print out the pyramid
    for (int row = 1; row <= num; row++) {
        //Print out blocks of white spaces
        for (int block = 1; block <= num - row; block++) {
                printf("    ");
            }
        
        // Print ascending order number which is near the input value the most (Left pyramid side)
        for (int col = row -1 ; col >= 0; col--) {
                printf("%2d  ", num-col);
            }

        //Print out the border of the right pyramid side
        for (int col = 2; col <= row; col++) {
                
                if (col == row || row == num){
                    printf("%2d  ", num - col +1);
                }
                else{ printf("    ");}

            }
        printf("\n"); //newline to go to next row
    }
    
    return 0;
}