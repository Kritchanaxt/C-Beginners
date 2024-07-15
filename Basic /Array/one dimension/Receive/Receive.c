#include<stdio.h>

int main(){
    char name[100], count=0, i;

    printf("Enter your number: ");
    scanf("%99s", name);

    for(i=0; name[i]!='0'; i++)count++;
    printf("count letter = %d\n", count);

    for(i=count-1; i>=0; i--){
        printf("%c", name[i]);
    }

    return 0;
}