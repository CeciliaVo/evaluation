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

#include<stdio.h>
int main(){
int even;
int sum = 0;
printf("Enter an even integer:\n");
scanf("%d",&even);
if (even % 2 != 0){
    printf(" It is not an even integer.");
} 
for (int i = 0; i <=even; i=i+2) {
    sum = sum + i;
} printf("Sum of all even values from 0 to %d is: %d",even,sum);
return 0;
}