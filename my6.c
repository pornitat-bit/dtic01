// ป้อนชื่อ-สกุล ชื่อเล่น อายุ เงินเดือน แล้วแสดงผลอออกทางหน้าจอ

#include <stdio.h>
#define showLine printf("++++++++++++++++++++++++++++++++\n");



int main(){
    char fullname [50];     //%[^/n]
    char nickname [40];     //%s
    char age ;              //%d
    char salary ;           //%lf

    showLine
    printf(" Your Information   \n");
    showLine
    printf("Enter your fullname: ");
    scanf("%[^\n]" ,&fullname);
    printf("Enter you nickname: ");
    scanf("%s" ,&nickname);
    printf("Enter you age: ");
    scanf("%d" ,&age);
    printf("Enter you salary: ");
    scanf("%f" , &salary);
    showLine 
    printf("Your fullname: %s\n",fullname);
    printf("Your nickname: %s\n",nickname);
    printf("Age: %d\n",age);
    printf("Salary: %.2f\n", salary);
    showLine



    return 0;
}