#include <stdio.h>

int main() {
    int magic = 123;
    int guess;

    printf("Enter your magic number: ");
    scanf("%d", &magic);

    printf("Enter your guess: ");
    scanf("%d", &guess);

    if (guess == magic) {
        printf("*** Right ***\n");
        printf("%d is the magic number", magic);
    } else {
        (guess < magic) ? printf("High\n") : printf("Low\n");
    }

    return 0;
}
