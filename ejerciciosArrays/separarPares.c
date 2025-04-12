#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeros[20];
    int i, j, temp;

    // Inicializamos el generador de números aleatorios
    srand(time(NULL));

    // Llenamos el array con números aleatorios entre 0 y 100
    for (i = 0; i < 20; i++) {
        numeros[i] = rand() % 101;
    }

    // Mostramos el array original
    printf("Array original:\n");
    for (i = 0; i < 20; i++) {
        printf("[%d]", numeros[i]);
    }
    printf("\n");

    // Lógica tipo "burbuja inversa" para empujar pares hacia el principio
    for (i = 0; i < 20 - 1; i++) { // Repetimos varias pasadas por el array
        for (j = 0; j < 20 - 1; j++) {
            // Si encontramos un impar seguido de un par, los intercambiamos
            if (numeros[j] % 2 != 0 && numeros[j + 1] % 2 == 0) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
        
    }

    // Mostramos el array reorganizado
    printf("Array reorganizado (pares al principio, impares al final):\n");
    for (i = 0; i < 20; i++) {
        printf("[%d]", numeros[i]);
    }
    printf("\n");

    return 0;
}
