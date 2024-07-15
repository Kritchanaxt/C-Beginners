#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = " World";

    // หาความยาวของสตริง
    int len = strlen(str1);
    printf("Length of str1: %d\n", len);

    // คัดลอกสตริง
    strcpy(str1, str2);
    printf("After strcpy: %s\n", str1);

    // ต่อสตริง
    strcat(str1, str2);
    printf("After strcat: %s\n", str1);

    return 0;
}
