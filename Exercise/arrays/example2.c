#include <stdio.h>
#include <string.h>

void concatStrings(char result[], const char str1[], const char str2[], const char str3[]) {
    sprintf(result, "%s%s%s", str1, str2, str3);
}

int main() {
    char str1[100], str2[100], str3[100], result[300];
    int choice;

    printf("Enter string 1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Enter string 2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("Enter string 3: ");
    fgets(str3, sizeof(str3), stdin);
    str3[strcspn(str3, "\n")] = '\0';

    while (getchar() != '\n'); 

    printf("\nMenu:\n1. Concatenate\n2. Compare\n3. Length\n");
    printf("Enter your choice (1-3): "); scanf("%d", &choice);

    switch (choice) {
        case 1: concatStrings(result, str1, str2, str3); printf("Concatenated String: %s\n", result); break;
        case 2: printf("Strings are %s.\n", strcasecmp(str1, str2) ? "not equal" : "equal"); break;
        case 3: printf("Total length of strings: %lu\n", strlen(str1) + strlen(str2) + strlen(str3)); break;
        default: printf("Invalid choice.\n");
    }

    return 0;
}
