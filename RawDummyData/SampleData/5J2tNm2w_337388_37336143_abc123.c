/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: a8UIOO0tdhmB
    ID: aDlaj4GalMzb
    Compiler used: zN5XyhidVF9f
    Created  date: JdtgbsuWhNNg
    References: shXjlAQ6oOtS
*/

#include <stdio.h>
int main () {
    float a, b, c 

    //prompt the user to enter three float numbers
    printf("Enter three float numbers:");
    scanf("%f %f %f", &a, &b ,&c);

    // Check if any of the numbers is the sum of the other two 
    if (a == b + c|| b== a + c|| c == a + b ){
        printf("Yes, one of the numbers is the sum of the other two.\n");
    } else {
        printf("No, none of the numbers is the sum of the other two.\n");
    }
   
    return 0;
}

#include <stdio.h>
int main () {
    int num, sum = 0; 
    printf("Enter an even integer")
    scanf("%d",&num);

    //Check if the input is an even integer
    if (num%2!=0) {
        printf("Error: You must enter an even integer.\n");
        retur 1;// Exit the program with a error code
     }
    while (1) { 
        //Calculate sum of even numbers from 0 to num 
        for (int i = 0; i <= num; i += 2) { 
            sum += i;
        } 
    
    printf("Sum of all even numbers from0 to %d is: %d\n", num, sum);
    
    // Ask the user to input another even integer 
    printf("Enter another even integer (or odd integer to exit): ");
    scanf("%d", &num);

    // Check if the input is an odd integer 
    if (num % 2 !=0) {
        printf("It is not an even inter\n");
        break;// Exit th loop
    }

    sum = 0; // Reset sum for the next calculation
    }

return 0;
}

#include <stdio.h> 

int main() {
    int num;
    // Prompt the user to enter an integer between 1 and 10 
    printf("Eneran integer between 1 and 10: ");
    scanf("%d", &num);
    // Check if the input is within the valid range 
    if (num < 1 || num > 10) {
        printf("Invalid input. Please enter an integer between 1 and 10.\n");
        return 1; // Exit with error code 
    }

}
