#include <stdio.h>

int main() {
    float temperatures[7];  
    float sum = 0;

    for (int i = 0; i < 7; ++i) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temperatures[i]);
        sum += temperatures[i];
    }
    
    float avg = sum / 7;

    printf("The average temperature for the week is: %2f\n", avg);

    return 0;
}