//perporcessor directive

#include <stdio.h> //คือ ประกาศ library
#include "math.h"

// คือ การประกาศค่าคงที่ คือ การสร้างตัวแทนของอไรสักอย่างนึง เพื่อเอาไปใช้ในโปรแกรม
#define ShowPa printf("+++++++++++++++++++++++++++\n");
#define SMILE "5555"

//globol (ใช้ที่ไหนก็ได้)  declaration (ประกาศ/สร้าง)
int number = 999;
void showHey();

//uaer-defined function
void showHi(){
    printf("Hi...........\n");
}

int main(){ //main function
    ShowPa
    printf("DTI-SAU\n");
    printf("%If\n", pow(2,20));
    ShowPa
    showHi();
    showHey();


    return 0;
}

//uers -defined function
void showHey(){
    printf("Hey...............\n");
}
    
