#include "stdio.h"

int main (){
    int x,y,SUM;
    printf("Enter Number ");
    scanf("%d",&x);

    y = x > 8? 20 : 15; 
    
    printf("y is %d \n ",y);
    SUM = x + y;

    printf("sum = %d\n",SUM);
    getchar();
}

 //ถ้า x มากกว่า 8, y จะมีค่าเป็น 20. 
//ถ้า x ไม่มากกว่าหรือเท่ากับ 8, y จะมีค่าเป็น 15.