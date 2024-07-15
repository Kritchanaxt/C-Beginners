#include <stdio.h>

int main(){
    int i, max, min;
    int num[10];

    for(i = 0; i < 10; i++){
        printf("Enter number %d = ", i+1);
        scanf("%d", &num[i]);

        if(i == 0){
            max = num[0];
            min = num[0];
        }
        max = (max > num[i]) ? max : num[i];
        min = (min < num[i]) ? min : num[i];
    }
    printf("Max Value = %d\n", max);
    printf("Min Value = %d\n", min);

    return 0;
} 