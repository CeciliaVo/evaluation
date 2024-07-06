/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: wa4z37WXd2No
    ID: 7tYqYIyR1fuK
    Compiler used: zN5XyhidVF9f
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

/*
Write a program that prompts the user to enter an integer between 1 and 10 inclusively. Then
nicely displays a pattern as shown below.

Sample Run:
Enter a number (1 - 10): 10
                                    10
                                9   10  9
                            8   9   10      8
                        7   8   9   10          7
                    6   7   8   9   10              6
                5   6   7   8   9   10                  5
            4   5   6   7   8   9   10                      4
        3   4   5   6   7   8   9   10                          3
    2   3   4   5   6   7   8   9   10                              2
1   2   3   4   5   6   7   8   9   10  9   8   7   6   5   4   3   2   1
*/

#include <stdio.h>

int main() {

    // create an int to store the user input
    int num;

    // prompt the user for the number between 1-10
    printf("Enter a number (1 - 10) : ");
    
    // store the user input in num
    scanf("%d", &num);

    //printf("%d\n", num);
    // create variable to store the number of columns and rows
    int col, row;

    // set column equal to num
    col = num;

    // create a loop to iterate from row 1 to row of number
    for (int row = 1; row <= num; row++) {

        // calculate the number of spaces before the number
        int spaces = num - row;
        while (spaces > 0) {
            printf("    ");
            spaces--;
        }

        // print out the number which equals the column
        printf("%4d", col);
        
        // start from the column value + 1 then print up to number
        int i;
        for (i = col + 1; i <= num; i++) {
            printf("%4d", i);
        }

        // calcualte the number of spaces after the input number
        int afterSpaces = num - col - 1;

        // check if the row is not the last
        if (row != 1) {

            // print out the calculated number of spaces after the number
            for (int k = afterSpaces; k > 0; k--) {
                if (row != num && row != 1) {
                    printf("    ");
                }
            }

            // check if the last row then print the number minus row plus one
            if (num - row != 0) {
                printf("%4d", num - row + 1);
            }

            // if the last row then print the numbers decremented from the number minus 1
            if (row == num) {
                for (int i = num - 1; i > 0; i--) {
                    printf("%4d", i);
                }
            }
        }
        
        // print the line break
        printf("\n");

        // decrement the column value then repeat for the next row
        col--;
    }

    return 0;
}