#include <stdio.h>

int main() {
    char inputText[100];

    printf("Enter some English text: ");
    scanf("%99s", inputText);

    printf("Modified text: ");

    for (int i = 0; inputText[i] != '\0'; ++i) {
        char currentChar = inputText[i];

        if (currentChar != 'a' && currentChar != 'e' && currentChar != 'i' && currentChar != 'o' && currentChar != 'u' &&
            currentChar != 'A' && currentChar != 'E' && currentChar != 'I' && currentChar != 'O' && currentChar != 'U') {
            printf("%c", currentChar);
        }
    }

    printf("\n");

    return 0;
}


