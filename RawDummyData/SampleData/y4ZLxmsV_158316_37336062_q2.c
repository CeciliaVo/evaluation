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
    
    int sum = 0;

    do {
        printf("Enter an even integer: ");
        scanf("%d", &num);

        if (num % 2 != 0) {
            printf("It is not an even integer.");
            break;
        }
        
        for (int even_num = 0; even_num <= num; even_num++) {
            sum = even_num + even_num;
        }

        printf("Sum of all even values from 0 to %d is: %d", num, sum);
        break;
    } while (num % 2 == 0);
    
    return 0;
}

/*if (num % 2) {
        do {
            even_num + 2;
            sum = even_num;
        } while (even_num <= num); 
        
    } else (num % num); {
        printf("It is not an even integer.");
    }  
*/ 