#include <stdio.h>

int main(){

    int numeros[5] = {5, 10, 15, 25, 30};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + numeros[i];
    }
    printf("Suma total es %d", sum);
    return 0;
}