/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: WThhjD0kpFWD
    ID: crZwU3Pu3P52
    Compiler used: rM79xorQ5WyH
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main(void) {
    int num;
    printf("Enter a number (1 - 10): ");
    scanf("%d", &num);

    for (int col = 1; col <= num; col++) {
        if (col == 1) {
            
            // White spaces
            for (int block = 1; block <= num - col - 1; block++) {
                printf("    ");
            }
            
        }
    }

    return 0;
}