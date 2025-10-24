#include <stdio.h>
#define showpa printf("----------------------\n");


int main(){
    int number , result;
    int x;

    showpa
    printf(" Multiplication table  \n");
    showpa
    printf ("Enter number ");
    scanf ("%d", &number);
    showpa 

    for( x = 1 ;x<=12 ; x=x+1 ){//x++,++x,x+=1
        result = number * x;
        printf("%d x %d = %d\n", number, x, result);
    }
    showpa

    return 0;
}