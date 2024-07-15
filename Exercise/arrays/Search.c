#include <stdio.h>

int search(int arr[], int key, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return 1; // พบตัวเลขในอาร์เรย์
        }
    }
    return 0; // ไม่พบตัวเลขในอาร์เรย์
}

int main(){
    int arr[8], key;

    printf("Enter 8 integer:\n");
    for(int i = 0; i < 8; i++){
        printf("Enter number %d = ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &key);

    if(search(arr, 8 ,key)){
        printf("%d is found in the array: \n", key);
    } else {
        printf("%d is not found in the array: \n", key);
    }

    return 0;
}