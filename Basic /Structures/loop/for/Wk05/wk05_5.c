#include "stdio.h"

int main(){
    int num,sum,prod,max;
    sum = 0;
    prod = 1;

    printf("Input number =  ");
    scanf("%d", &max);

    for(num=1; num<=max; num=num+1){ 
        sum += num;
        prod *= num;
    }

    printf("Product = %d and sum = %d", prod,sum);
    return 0;

}

//The loop starts at 1 (num = 1) and runs until it reaches the maximum value entered by the user (max). With each loop, num is increased by 1 (num = num + 1).