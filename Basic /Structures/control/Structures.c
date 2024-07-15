#include <stdio.h>
#include <stdlib.h>

int main() {

    // If-else statement
    int x = 2; // Declare and initialize a variable named x with a value of 10

    if (x > 5) { // Check if the value of x is greater than 5
        printf("x is greater than 5\n");   // Print a message if x is greater than 5
    } else {
        printf("x is not greater than 5\n"); // Print a message if x is not greater than 5
    }

    // For loop
    for (int i = 0; i < 5; i++) { // Use a for loop to iterate from i starting at 0, less than 5, and increment i by 1 in each iteration
        printf("%d", i); // Print the value of i each time the loop runs
    }

    printf("\n");

    // While loop
    int count = 0; // Initialize a variable named count with a value of 0

    while (count < 3) { // Execute the following block while count is less than 3
        printf("Count: %d\n", count); // Print the current value of count
        count++;
        // Increment count by 1
    }

    return 0; // Indicates successful program execution
}