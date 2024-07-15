#include <stdio.h>

void separate(int arr[],int n){
    int i;

    printf("Odd numbers: \n");
    for(i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            printf("%d", arr[i]);
        }
    }
    printf("\n");

    printf("Even numbers: \n");
    for(i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            printf("%d", arr[i]);
        }
    }
    printf("\n");
}

int main(){
    int arr[10], i;

    printf("Enter 10 integer:\n");
    for(i = 0; i < 10; i++){
        printf("Enter number %d = ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n");
    separate(arr, 10);

    return 0;
}