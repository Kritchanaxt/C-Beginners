#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));

    // ใส่ค่าในอาร์เรย์
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 2;
    }

    // พิมพ์ค่าในอาร์เรย์
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // คืนพื้นที่หน่วยความจำ
    free(arr);

    return 0;
}
