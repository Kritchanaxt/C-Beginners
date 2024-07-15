#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime;
    struct tm *localTime;

    // รับค่าเวลาปัจจุบัน
    currentTime = time(NULL);

    // แปลงเวลาให้เป็นโครงสร้าง struct tm
    localTime = localtime(&currentTime);

    // พิมพ์วันที่และเวลา
    printf("Current Date and Time: %s", asctime(localTime));

    return 0;
}
