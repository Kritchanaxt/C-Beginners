#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char input[100];
    int countR = 0;

    printf("Insert Text : ");
    scanf("%s", input);

    for (int i = 0; i < strlen(input); i++) {
        if (toupper(input[i]) == 'R') {
            countR++;
        }
    }

    printf("Count of 'R' in your Text: %d\n", countR);

    return 0;
}

