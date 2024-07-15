#include <stdio.h>

int main(){
    int a,b;
    char ch;

    printf("Do you want to:\n");
    printf("Add, Subtract, Multiply, or Divide ?\n");
    printf("Enter first letter: ");
    ch = getchar();

    printf("\n");

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if((ch == 'A')||(ch == 'a')) {
        printf("%d\n", a+b);
    } else if ((ch == 'S')||(ch == 's')){
        printf("%d\n", a-b);
    } else if ((ch == 'M')||(ch == 'm')){
        printf("%d\n", a*b);
    } else if ((ch == 'D'||(ch == 'd') && b!=0)){
        printf("%d\n", a/b);
    }

    return 0;
}