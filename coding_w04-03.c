#include <stdio.h>  //Keyword; include, Indentifier : stdio.h
int main() {         //Keyword: int, Indentifier: main
    char nameInitial = 'T' ;  //ใช้char เพื่อเก็บอักษรของชื่อที่มีอักษรตัวเดียว //กำหนดเก็บอักษรตัวแรกของชื่อจริง
    int age = 18;             //ใช้int เพื่อเก็บอายุที่มีตัวแปรเป็นจำนวนเต็ม // กำหนดเก็บอายุ
    float weight = 80.0;       //ใช้float เพื่อเก็บน้ำหนักที่เป็นทศนิยมได้ // กำหนดเก็บน้ำหนัก
    char gender[] = "Male";     //ใช้char array เพื่อเก็บเพศที่เป็นตัวแปรประเภท pointer //กำหนดเก็บเพศ
    printf("nameInitial = %c\n", nameInitial); //Print the initial of the name
    printf("age = %d\n", age);                  //Print the age
    printf("weight = %.2f\n", weight);          //Print the weihght with one decimal place
    printf("gender = %s\n", gender);           //Print Male
    return 0;  
}
