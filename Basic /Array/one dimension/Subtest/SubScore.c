#include <stdio.h>

int main(){
    int score[4], i, sum=0;
    float avg;

    for(i=0; i<4; i++){
        printf("Enter number: %d", i);
        scanf("%d", &score[i]);
        sum += score[i];
        //sum = sum + score[i]; 
    }

    avg = (float)sum/4;
    printf("The Average = %2.f\n", avg);

    return 0;
} 

//(float)sum: ทำการแปลงค่าของ sum เป็นทศนิยม (float)ถ้า sum เป็นจำนวนเต็ม, การแปลงชนิดนี้จำเป็นเพื่อให้การหารนำไปทำในรูปแบบทศนิยม
//avg = ...: ส่วนนี้ทำการกำหนดค่าผลลัพธ์ของการหารให้กับตัวแปร avg.