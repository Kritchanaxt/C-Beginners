#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare variables
    int num1, num2;
    float f;

    // Get two integers from the user
    printf("Enter two integers separated by a space: ");
    scanf("%d %d", &num1, &num2);

    // Get a floating-point number from the user
    printf("Enter a floating-point number: ");
    scanf("%f", &f);

    // Print the entered floating-point number
    printf("You entered: %f\n", f);

    return 0; // Indicates successful program execution
}