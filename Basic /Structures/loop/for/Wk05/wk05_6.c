#include "stdio.h"

int main(){
    int i;
    char ch;

    for (i = 1; i < 10000; i++)
    {
       if(!(i%6)){
        printf("%d more ? (Y/N)", i);

        ch = getchar();
        if ((ch =  'n') || (ch =  'N'))break;
       printf("\n");
    }
}
    return 0;

}