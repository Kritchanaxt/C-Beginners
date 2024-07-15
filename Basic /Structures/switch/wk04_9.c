#include <stdio.h>

int main(){
    int i;

    printf("Enter a number between 1 to 4: ");
    scanf("%d", &i);

    switch(i){
        case 1: i+=1;
            printf("i=%d", i);
            break;
        case 2: i-=1;
            printf("i=%d", i);
            break;
        case 3: i*=1;
            printf("i=%d", i);
            break;
        case 4: i/=1;
            printf("i=%d", i);
            break;
        default: 
            printf("unrecognized number ");
            break;
    }

    return 0;
}