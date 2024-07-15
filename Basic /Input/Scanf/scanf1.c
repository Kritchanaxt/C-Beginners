#include <stdio.h>

int main() {
    int num;

    // อ่านข้อมูลจำนวนเต็มจากผู้ใช้
    printf("please Enter an integer: ");
    scanf("%d", &num);

    // แสดงผลลัพธ์
    printf("The value you enter is: %d\n", num);

    return 0;
}

//scanf: ใช้สำหรับการรับค่าข้อมูลจากผู้ใช้ โดยรับข้อมูลจากคีย์บอร์ดตาม
