#include <stdio.h>

int main(){
    int x;

    printf("INPUT NUMBER : ");
    scanf("%d", &x);

    if( x < 0){
        x = x * -1;
    }
    printf("INPUT %d\n", x);

    return 0;
}