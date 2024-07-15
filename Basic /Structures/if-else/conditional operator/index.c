#include <stdio.h>

int main() {
    int number = 10;

    // Normal use to
    if (number % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    // Conditional Operator use to 
    printf((number % 2 == 0) ? "Even\n" : "Odd\n");

    return 0;
}

// Structures: condition ? expression_if_true : expression_if_false;
