/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: L2wFvbGzSI3F
    ID: m8YQSAdGSZGo
    Compiler used: xlkVLeOovPQM
    Created  date: JdtgbsuWhNNg
    References: l0SO4RYgrMN5
*/
#include <stdio.h>
#include <math.h>
int main() {
    //creating two variable
    int num, sum;
    printf("Enter an even integer: "); //let user input and save the value to num
    scanf("%d", &num);

    //making sure 
    if(num % 2 == 0) {
        for (int i = num; i <= num; i++) {
        sum = i + num;
        }
        printf("The sum is: %d \n", sum);
    } else
    printf("Not an odd number \n");
    return 0;
}