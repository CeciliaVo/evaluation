/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: hKxBAZryQ1Dh
    ID: 5UDmUFrR2PQa
    Compiler used: zN5XyhidVF9f
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main(){

    int num;
    printf("Enter a number (1 - 10): ");
    scanf("%d", &num);

    // print out left hand side
    for(int i = num; i >= 1; i--)
    {
        for(int block = i - 1; block >= 1; block--) // Generate block before each row
        {
            printf("   ");
        }
        for(int j = i; j <= num; j++) // Print number for each row
        {
            printf("%3d", j);
        }            
    // print out right hand side
        for(int n = num - 1; n >= 1; n--)
        {
            // Generate an if statement to print the number on each row
            if(n == i) 
            {
                printf("%3d", n);
            }
            else if(i == 1)
            {
                printf("%3d", n);
            }
            else 
            {
                printf("   ");
            }    
        }        
        printf("\n");
    }
    return 0;
}