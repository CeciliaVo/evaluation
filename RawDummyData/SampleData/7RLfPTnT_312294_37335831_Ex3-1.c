/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: OD5Fbxa7YNvt
    ID: VtPldBs4cEjO
    Compiler used: J1EzQMFiIkL2
    Created  date: cFP9XKDbUANg
    References: shXjlAQ6oOtS
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 11


int main(){

    int nums; 
    //int arr[SIZE];

    printf("Enter an integer between 1 and 10: ");
    scanf("%d", &nums);


    while (nums < 1 || nums > 10){

        for(int i = nums; i >= 0; i--){
            for(int j = i - 1; j < nums; j--){
            printf("%d", nums);

            }
        }

    }
    printf("\n");

    int row;
    int val; 
    for(row = 1; row <= nums; row++){
        printf("%2d  ", row);


    }

    for(val = nums- 1; val >= row - 1 ; val++){
        printf("%2d  ", val);

    }


    for (int row = 0; row < SIZE; row++){
        for(int val = row - 1; val < SIZE; val++){

            if (row > val){
                int tmp = val;
                val = row;
                row = tmp;


            }

        }
    }

    

}
