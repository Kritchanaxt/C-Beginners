#include <stdio.h>

int main() {
    int n, i, max, min;

    printf("Enter maxloop = ");
    scanf("%d", &n);

    int r[n]; 

    for (i = 0; i < n; ++i) {
        printf("Enter number %d = ", i + 1);
        scanf("%d", &r[i]);

        if (i == 0) {
            min = r[0];
            max = r[0];
        }
        max = (max > r[i]) ? max : r[i];
        min = (min < r[i]) ? min : r[i];
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    return 0;
}
