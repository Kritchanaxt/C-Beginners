#include "stdio.h"

int main(){
    int sum,i,num,n;
    sum = 0;

    for(i = 1; i < 5; i++){ 
        printf("Input Number = ");
        scanf("%d", &num);
        sum += num;
    }

    printf("SUM = %d ", sum);
}