#include <stdio.h>

int main(){
    int num = 0;
    int cont = 0;
    while (num <= 20)
    {
        if (num % 2 == 0)
        {
            printf("%d\n", num);
            cont++;
        };
    num++;
    };
    printf("%d cantidad de numeros pares\n", cont);
    return 0;
}