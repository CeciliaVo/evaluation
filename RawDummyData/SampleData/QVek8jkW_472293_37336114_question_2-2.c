/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: 921qIoR84Ukb
    ID: 1sAfoxN6Y83W
    Compiler used: zN5XyhidVF9f
    Created  date: JdtgbsuWhNNg
    References: Mt96p4q1nHo0
*/

#include <stdio.h>

int main() {

    int integer, sum;

    do {
        //Prompt user to input an even integer:
        printf("Input an even integer: ");
        scanf("%d", &integer);
        sum = 0;
        //Calculating the sum:
        if (integer % 2 == 0) {
            for (int i = 0; i <= integer; i += 2) {
                sum += i;
            }
            printf("Sum of all even integers from 0 to %d is: %d\n", integer, sum);
        }
        else printf("That is not an even integer.\n");

    } while (integer >= 0);

    return 0;
}