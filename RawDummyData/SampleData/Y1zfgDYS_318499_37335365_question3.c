/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: dfz6XyZ18AtO
    ID: AfXUxnRPt3A9
    Compiler used: 2yohDZwENKA4
    Created  date: JdtgbsuWhNNg
    References: shXjlAQ6oOtS
*/



#include <stdio.h>

int main(void) {
    printf("Please enters a number within the range from 1-10: \n"); //prompt user to input a number within range 1-10
    int user_num;
    scanf("%d", &user_num);

    /////////////////////////////////////////////////////////////////////////////////////  create a table by size of num x (num*2 - 1)
        for (int i = 1; i <= user_num; i++ ) {  //for row number
            for(int j = 1; j <= user_num * 2 - 1; j ++) { // for col number

                if( j > user_num) {
                    printf("%3d", j - (j - user_num)*2);
                } else {
                    printf("%3d", j);
                }
            }
            printf("\n"); // move to the next row

        }
    
   
    return 0;
}