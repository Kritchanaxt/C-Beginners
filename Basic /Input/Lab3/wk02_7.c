#include <stdio.h>
#define TWOPI (3.1415926 * 2.0)

int main (){

    double radius, circumf;
    printf("Enter radius: ");
    scanf("%lf",&radius);

    circumf = TWOPI * radius;
    printf("Cricumference: %g\n", circumf);

    getchar();
}