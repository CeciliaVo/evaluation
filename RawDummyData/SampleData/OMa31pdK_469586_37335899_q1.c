/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: 4ZpMFPcvTKtW
    ID: mjTRhHgLJMXD
    Compiler used: jnj84mv799Vq
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main () {
    float num1, num2, num3; // Add three variables for three float numbers

    // Enter three float numbers:
    printf("Enter three float numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    printf("A number is the sum of the others: ");
    if (num1 + num2 == num3 || num1 + num3 == num2 || num2 + num3 == num1) {
        printf("YES\n"); 
    } 
    else {
        printf("NO\n");
    } // if-else statement to check if any two numbers is equal to one another

    
    return 0;
}