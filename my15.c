#include <stdio.h>

#define pa printf ("-------------------------\n");


int main (){
    int i;

    pa
    printf ("   Divisible by 8  \n");
    pa

    for(i = 1; i <= 100; i++){

        if(i % 8 !=0){
            continue;
        }
        printf("%d\n",i);
    }    
    pa 

    return 0;

}