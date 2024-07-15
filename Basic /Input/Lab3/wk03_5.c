#include "stdio.h"

int main(void){
   // ประกาศตัวแปร float ทั้งหก x1, x2, x3, x4, x5, x6 และ average
    float x1, x2, x3, x4, x5, x6, average;

    // ประกาศตัวแปร int สำหรับเก็บจำนวนข้อมูลที่ผู้ใช้ป้อน
    int number;

    // กำหนดค่าเริ่มต้นให้ x1, x2, x3, x4, x5, x6 เป็น 0.0f
    x1 = x2 = x3 = x4 = x5 = x6 = 0.0f;

    // แสดงข้อความให้ผู้ใช้ป้อนข้อมูล
    printf("\nEnter up to six numbers terminated with a $ ? ");

    // รับข้อมูลจากผู้ใช้และเก็บจำนวนข้อมูลที่ถูกป้อนในตัวแปร number
    number = scanf("%f%f%f%f%f%f", &x1, &x2, &x3, &x4, &x5, &x6);

    // คำนวณค่าเฉลี่ยของตัวเลขที่ถูกป้อน
    average = (x1 + x2 + x3 + x4 + x5 + x6) / number;

    // แสดงผลลัพธ์ค่าเฉลี่ย
    printf("\n Average of %d numbers = %f", number, average);

    // รอผู้ใช้กด Enter ก่อนจบโปรแกรม
    getchar();
}