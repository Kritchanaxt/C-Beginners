#include <stdio.h>

int main()
{
    char firstname[100], lastname[50];
    int i = 0, j = 0;

    printf("\n Enter the first name : ");
    gets(firstname);
    printf("\n Enter the lastname string : ");
    gets(lastname);

    while (lastname[i] != '\0')
    {
        i++;
    }

    lastname[i] = ' ';
    i++;

    while (firstname[j] != '\0')
    {
        lastname[i] = firstname[j];
        i++;
        j++;
    }

    lastname[i] = '\0';
    printf("\n After appending, full name is : ");
    puts(lastname);
    return 0;
}