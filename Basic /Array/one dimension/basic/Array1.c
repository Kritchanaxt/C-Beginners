#include <stdio.h>
#include <stdlib.h>

int main () {
    // ประกาศและกำหนดค่าใน Array
    int numbers[] = {1, 2, 3, 4, 5,};

     // แสดงค่าทุกรายการใน Array
    for (int i = 0; i < sizeof(numbers) / sizeof (numbers[0]); ++i) {
        printf("%d", numbers[i]);
    }
    return 0;
}