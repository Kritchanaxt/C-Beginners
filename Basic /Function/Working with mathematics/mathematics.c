#include <stdio.h>
#include <math.h>

int main() {
    double num1 = 25.0;
    double num2 = 2.0;

    // คำนวณรากที่สอง
    double squareRoot = sqrt(num1);
    printf("Square root of %lf is %lf\n", num1, squareRoot);

    // ยกกำลัง
    double powerResult = pow(num1, num2);
    printf("%lf raised to the power %lf is %lf\n", num1, num2, powerResult);

    // ค่าสัมบูรณ์
    double absoluteValue = fabs(-10.5);
    printf("Absolute value of -10.5 is %lf\n", absoluteValue);

    return 0;
}

