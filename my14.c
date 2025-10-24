#include <stdio.h>

#define pa printf ("-------------------------\n");



int main(){
    int number;
    pa
    printf("   Even & Odd Number   \n");
    pa
     
    while(1){//infinite loop
        printf (" Enter number");
        scanf ("%d",&number);
        pa
        if(number <= 0){
            pa
            break;
       
        }
        if (number % 2 ==0){
            printf("Number is Even number \n");
        }else{
            printf("Number is odd number \n");
        }
        pa


    }

    return 0;

}