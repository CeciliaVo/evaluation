/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: MPyjjrBEJzrF
    ID: ubml4gn3MQGe
    Compiler used: 9nMM81R3yyyo
    Created  date: JdtgbsuWhNNg
    References: Mt96p4q1nHo0
*/



#include <stdio.h>
int main(){
    int num;
    printf("Enter an integer between 1 and 10: ");
    scanf("%d",&num);
    for(int row =1;row <=num;row++){
        for( int block =1;block <=num-row;block++){
            printf("    ");
        }
        for (int val = num- row+1;val<=num;val++){
            printf(" %2d ",val);
        }
        
        printf("\n");
    }

    return 0;
}