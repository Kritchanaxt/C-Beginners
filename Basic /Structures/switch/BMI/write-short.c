#include <stdio.h>

int main() {
    float weight;
    printf("Please Enter weight: ");
    scanf("%f", &weight);

    int weightCategory = (weight > 50) ? 1 : ((weight >= 40) ? 2 : 3);

    switch (weightCategory) {
        case 1: printf("Heavy weight\n"); break;
        case 2: printf("The weight is just right\n"); break;
        case 3: printf("Low weight\n"); break;
        default: printf("Invalid weight\n"); break;
    }

    return 0;
}
