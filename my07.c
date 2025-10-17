#include "stdio.h"
#define senpa printf("--------------------------\n");


int main (){
    int number ;

    senpa 
    printf ("  Lucky number \n");
    senpa 
    printf ("Enter lunky number: ");
    scanf("%d", &number);
    senpa
    if(number==13){
        printf("You are correct, 13 is a Lucky number\n");
    }
    senpa

    return 0;
}