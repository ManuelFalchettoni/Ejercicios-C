#include <stdio.h>

int main (){
    int cont;
    for (int i = 0; i <= 10; i++)
    {
        printf("%d\n", i);
        cont += i;
    };
    printf("%d", cont);
    return 0;
}