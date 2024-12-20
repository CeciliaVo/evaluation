/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: BAfm1bRmPCpj
    ID: VX2MfBIX4D7y
    Compiler used: 20zmVn0LRwmo
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main() {
    int num = 0;

    do {
        int sum = 0;
        
        printf("Enter an even integer: ");
        scanf("%d", &num);

        // Loop from 0 to num, then check & add only even numbers to sum
        for (int i = 0; i <= num; i++) {
            if (i % 2 == 0) {
               sum += i;
            }
        }

        // Check if num is even, else ignores and exit loop
        if (num % 2 == 0) {
            printf("Sum of all even values from 0 to %d is: %d\n", num, sum);
        }

    } while (num % 2 == 0);
    
    printf("It is not an even integer.\n");

    return 0;
}