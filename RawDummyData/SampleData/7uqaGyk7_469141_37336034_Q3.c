/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: ykySNwuJRqLy
    ID: u9PmSNkupXA5
    Compiler used: J1EzQMFiIkL2
    Created  date: aesmAYSayOix
    References: shXjlAQ6oOtS
*/
#include <stdio.h>
int main(){
    int a,b,c,d,e,f,row,col;
    printf("Enter a number: ");
    scanf("%d", &a);
    for(row=a; row>1; row--){
        for(col=2; col<=row; col++){
            printf("    ");
        }

        for(col=row; col<=a; col++){
            printf("%4d", col);
        }

        if(row<=a-1){
        for(col=a; col>=row+2; col--){
            printf("    ");
        }
        
        for(col=row; col<=row; col++){
            printf("%4d", col);
        }
        }
        printf("\n");
    }
    
    for(row=1; row<=1; row++){
        for(col = 1; col <=a; col++){
            printf("%4d", col);
        }
        for (col = a-1; col >=1; col--){
            printf("%4d", col);
        }
        printf("\n");
    }

    
    return 0;
}