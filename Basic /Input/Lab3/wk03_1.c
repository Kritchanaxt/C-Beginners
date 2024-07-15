#include "stdio.h"

int main (){
    int x,y;
    printf("Enter y :");
    scanf("%d", &y); 
    x = (y = y-5, 30/y); // ประเมินนิพจน์ที่คั่นด้วย comma นั่นคือ, จะลบ 5 จาก y ก่อน, จากนั้นจึงทำการหาร 30 ด้วยค่า y
    printf("x= %d\t y=%d\n", x,y);
    getchar();
}