#include <stdio.h>

int main(){

    int x = 3;
    int y = 5;
    int temp; 

//make the values ​​alternate
    temp = x;
    x = y;
    y = temp;

    printf("x = %d\n",x);
    printf("y = %d\n",y);
}