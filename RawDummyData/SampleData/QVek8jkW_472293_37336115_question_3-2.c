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

    int num, a = 1;
    char space1[] = " ";
    char space2[] = "   ";

    printf("Enter a number (1 - 10): ");
    scanf("%d", &num);

    //Print the first line:
        //Print the spaces: 
        for (int j = 1; j <= num * 3 + 4; j++) {
            printf("%s", space1);
        }
        //Print the first number:
        if (num == 10) printf("%d\n", num); else printf(" %d\n", num);

    //Print the following lines:
    for (int i = 1; i < num; i++) {

            //Print the spaces: 
            if (i != 0) {
                for (int j = i; j <= num; j++) {
                    printf("%3s", space1);
                }
            }

            //Print the numbers(ascending):
            for (int j = num - i; j <= num; j++) printf("%3d", j);

            //Print the spaces: 
            while (a <= i && num - i != 1) {
                for (int b = num; b >= num - a + 1; b--) printf("%-1s", space2);
                a++;
            }

            //Print the number(right side):
            if (num - i != 1) printf("\b%d", num - i);
            if (num - i != 1) printf("\n");

            
    }
    //Print the right side of the bottom line:
    printf("%s", space1);
    for (int j = num - 1; j >= 1; j--) printf("%2d ", j);

    return 0;
}