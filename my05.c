#include <stdio.h>

int dataA = 100; //Gobal variable ใช้ที่ไหนก็ได้
const int info = 111;

void showData (){
    int dataB = 200;  // local variable ใช้ได้เฉพาะภายใน code block ()
    int dataE;
    const int info2 =222;
    const int info3;
    //info1 = 333; error เพราะเป็น const  เปลี่ยนค่าไม่ได้
    //info2 = 444; error เพราะเป็น const  เปลี่ยนค่าไม่ได้
    //info3 = 555; error เพราะเป็น const  เปลี่ยนค่าไม่ได้ ต้องกำหนดตั้งแต่ตอนน decalare
    printf("dataA = %d\n",dataA );
    printaf("dataB = %d\n",dataB );
    //printf ("dataC = %d\n " , dataC); error
    dataE = 800;
}



int main(){
    int dataC = 300; //local variable  ใช้ได้เฉพาะภายใน code block   {}
    printf("dataA = %d\n",dataA );
    printaf("dataB = %d\n",dataC );
    //printf ("dataB = %d\n " , dataB); error
    dataC = 400;


    return 0;
}