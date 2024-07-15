#include "stdio.h"

int main(){
    int sum, num, i;

    sum =0;
    printf("Input Number = ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    sum += i; // 1 + 2 + 3 + 4 + 5 = 15

    printf("SUM = %d\n", sum);
}