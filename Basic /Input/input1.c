#include <stdio.h>

int main(){

    float a,b,c,d,res;
    printf("Input a Value :");
    scanf("%f",&a);

    printf("Input b Value :");
    scanf("%f",&b);

    printf("Input c Value:");
    scanf("%f",&c);

    printf("Input d Value:");
    scanf("%f",&d);

    res = (a+b) / (c-d) + (c+b) / (a+c);

    printf("Show Area Value : %f",res);

    return 0;
}