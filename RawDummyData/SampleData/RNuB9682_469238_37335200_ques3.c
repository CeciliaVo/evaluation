/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: Bj4u1jGjGGXT
    ID: SISVrcC9ItIg
    Compiler used: qsQdnytvm5L6
    Created  date: HjG3yqpHdhaS
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main()
{
    int row, col, spaceb, spacea, u_row, end_n;

    printf("Enter a number (1 - 10): ");
    scanf("%d", &u_row);

    for (row = 0; row < u_row - 1; row++)
    {   
        for (spaceb = u_row - 1; spaceb > row; spaceb--)
        {
            printf("   ");
        }

        for (col = u_row - row; col <= u_row; col++)
        {
            printf("%2d ", col);
        }

        
            for (spacea = row - 1; spacea < (row*2)-2; spacea++)
            {
                printf("   ");
            }
            
            if (row > 0)
            {
            end_n = u_row - row;
            printf("%2d ", end_n);
            }
        
            printf("\n");
    }

    for (col = 1; col <= u_row; col++)
    {
        printf("%2d ", col);
    }

    for (col = 9; col >= 1; col--)
    {
        printf("%2d ", col);
    }

    printf("\n");

    return 0;
}