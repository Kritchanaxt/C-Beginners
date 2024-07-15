#include <stdio.h>

int main(){
    int i, sum = 0;
    int number[5];

    printf("Enter 5 value integer: \n");
    for(i = 0; i < 5; i++){
        scanf("%d", &number[i]);
    }
    for(i = 0; i < 5; i++){
        sum += number[i];
    }

    printf("Sum 5 value = %d\n", sum);
    return 0;

}