#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");

    // เขียนข้อมูลลงในไฟล์
    fprintf(file, "Hello, File!");

    // ปิดไฟล์
    fclose(file);

    // เปิดไฟล์เพื่ออ่าน
    file = fopen("example.txt", "r");

    char buffer[50];

    // อ่านข้อมูลจากไฟล์
    fscanf(file, "%s", buffer);
    printf("Content of file: %s\n", buffer);

    // ปิดไฟล์
    fclose(file);

    return 0;
}

