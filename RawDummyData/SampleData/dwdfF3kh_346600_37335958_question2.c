/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: j94IiAFudlFY
    ID: NYBvZs2edP8t
    Compiler used: tk4qEaIA06Uw
    Created  date: JdtgbsuWhNNg
    References: QJiAfdP2xfzB
    */

    #include <stdio.h>

    int main(){
        int num, sum = 0, cnt = 0;
    do{
        printf("enter an even integer: ");
        scanf("%d", &num);
    if(num %2 == 0){
        for ( int i = 1; i <=num; i++){
            sum = sum + 2;
            cnt == 0;
        }
        printf("sum of all value from 0 to %d is: %d\n", num, sum,cnt);
          
        
    } else {
        printf("%d is an odd number", num);
    }  
    } while (num %2 == 0);


    return 0;
    }