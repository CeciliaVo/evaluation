/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: xIpP2gJGQWAs
    ID: f79QVvgXFWHk
    Compiler used: 9nMM81R3yyyo
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/
#include <stdio.h>
int main (){

    //take user input
    int input = 0;
    int sum = 0;

    do {; // a loop for the user to put even number
        printf("Enter an even integer: ");
        scanf("%d", &input);
        sum += input;
    
    if (input % 2 == 0){ //check if the number is even
        printf("Sum of all even values from 0 to %d is: %d\n", input, sum);
    } else {//if the number is odd
    printf("It is not an even integer.\n");
    }
    } while (input % 2 == 0 && input >= 0);

    return 0;
}