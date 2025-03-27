#include <stdio.h>

int main (){

    int numeros[4] = {100, 20, 80, 35};
    int max = 0;

    for (int i = 0; i < 4; i++)
    {
        if (numeros[i] > max)
        {
            max = numeros[i];
        }
    }
    printf("El maximo del array es %d", max);
    return 0;
}