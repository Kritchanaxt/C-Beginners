#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char data[] = "wave";
    char user_input;
    int i;

    printf("Enter a character: ");
    scanf(" %c", &user_input);

    user_input = tolower(user_input);

    if (strchr(data, user_input) != NULL) {
        printf("The character '%c' is in the data.\n", user_input);
        for (i = 0; i < strlen(data); i++) {
            if (tolower(data[i]) == user_input) {
                printf("Letter %d is correct.\n", i + 1);
            } else {
                printf("Letter %d is false.\n", i + 1);
            }
        }
    } else {
        printf("The character '%c' is not in the data.\n", user_input);
    }

    return 0;
}
