#include <stdio.h>

int main(){
    int x;

    printf("Enter Score(0..100): ");
    scanf("%d", &x);

    if(x >= 90){
        printf("EXCELLENT\n");
    } else if (x >= 80){
        printf("Good\n");
    } else if (x >= 70){
        printf("FAIR\n");
    } else {
        printf("FAIL\n");
    }

    return 0;
}