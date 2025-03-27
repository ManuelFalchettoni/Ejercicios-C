#include <stdio.h>

int main(){
    int num = 10;
    do
    {
        printf("%d\n", num);
        num--;
    } while (num >= 1);
    printf("Mensaje final");

    return 0;
}