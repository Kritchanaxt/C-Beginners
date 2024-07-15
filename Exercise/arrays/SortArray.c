#include <stdio.h>

void sortArray(int arr[], int n){
    int temp;

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                // สลับค่าข้อมูลในตำแหน่ง i และ j ถ้าตำแหน่ง i มีค่ามากกว่า j
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int i, number[5];

    printf("Enter 5 integer: \n");
    for(i = 0; i < 5; i++){
        printf("Enter number %d = ", i+1);
        scanf("%d", &number[i]);
    }

    // เรียงลำดับตัวเลขในอาร์เรย์
    sortArray(number, 5);
    printf("\n");

    // แสดงตัวเลขที่เรียงลำดับแล้ว
    printf("Number is ascending order:\n");
    for(i = 0; i < 5 ; i++){
        printf("%d", number[i]);
    }
    printf("\n");
    return 0;
} 