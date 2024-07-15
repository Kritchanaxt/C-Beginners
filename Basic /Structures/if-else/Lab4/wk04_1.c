#include <stdio.h>

int main(){
    int ans;

    printf("What is 10 + 14 = ?\n");
    scanf("%d", &ans);

    if(ans == 10+14){
        printf("Right ! \n");
    } else {
        printf("Sorry, you're wrong, ");
        printf("The answer is 24\n");
    }

    return 0;
}