#include <stdio.h>
#define showpa printf("------------------\n");





int main(){
    int bus_number;
    
    showpa
    printf("   Bus Number Information \n");
    showpa
    printf("Enter bus number : ");
    scanf("%d", &bus_number);
    showpa
    if(bus_number==57){
        printf("Go to Pinklao Bangkhunnon\n");
    }else if (bus_number==3){
        printf("Go to Sanam Luang Ladproao \n");
    }else if (bus_number==71){
        printf("Go to Hua Lamphong Yaowarat \n");
    }else if (bus_number==56){
        printf("Go to Bang Lamphu Sqphan Krungthon \n");
    }else if (bus_number==539){
        printf("Go to  Anusawari Chai Samsen \n");
    }else {
        printf("No bus number information.... \n");
    }
    showpa


return 0;

}
