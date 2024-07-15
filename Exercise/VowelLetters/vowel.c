#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char input[MAX_LENGTH + 1];
    int specialCharCount = 0;
    int positions[MAX_LENGTH]; 

    printf("Enter a string (maximum length 100 characters): ");
    fgets(input, sizeof(input), stdin);

    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    for (int i = 0; i < strlen(input); i++) {
        if (!(input[i] >= 'a' && input[i] <= 'z') && !(input[i] >= 'A' && input[i] <= 'Z') && !(input[i] >= '0' && input[i] <= '9')) {
            specialCharCount++;
            positions[specialCharCount - 1] = i + 1; 
        }
    }

    if (specialCharCount > 0) {
        printf("Special character(s) found.\n");
        printf("Position(s) of special character(s): ");
        for (int i = 0; i < specialCharCount; i++) {
            printf("%d ", positions[i]);
        }
        printf("\nTotal special character(s) found: %d\n", specialCharCount);
        
        FILE *file = fopen("output.txt", "w");
        if (file != NULL) {
            fprintf(file, "Special character(s) found.\n");
            fprintf(file, "Position(s) of special character(s): ");
            for (int i = 0; i < specialCharCount; i++) {
                fprintf(file, "%d ", positions[i]);
            }
            fprintf(file, "\nTotal special character(s) found: %d\n", specialCharCount);
            fclose(file);
        } else {
            printf("Error opening file.\n");
            return 1;
        }
    } else {
        printf("No special characters found.\n");
        
        FILE *file = fopen("output.txt", "w");
        if (file != NULL) {
            fprintf(file, "No special characters found.\n");
            fclose(file);
        } else {
            printf("Error opening file.\n");
            return 1;
        }
    }

    return 0;
}
