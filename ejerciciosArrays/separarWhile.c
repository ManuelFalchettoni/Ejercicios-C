#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void llenarArray(int numeros[], int largo){
    for (int i = 0; i < largo; i++) {
        numeros[i] = rand() % 101;
    }
}
void mostrarNumeros(int numeros[], int largo){
    printf("Array:\n");
    for (int i = 0; i < largo; i++) {
        printf("[%d]", numeros[i]);
    }
    printf("\n");
}
int main(){
    int largo = 10;
    int numeros[largo];
    // Inicializamos el generador de números aleatorios
    srand(time(NULL));

    // Llenamos el array con números aleatorios entre 0 y 100
    llenarArray(numeros, largo);

    // Mostramos el array original
    mostrarNumeros(numeros, largo);

    //Preparamos los indices y variables necesarios.
    int izq = 0, der = largo - 1;
    int temporal = 0;
    //Buscamos los pares e impares, y ordenamos.
    //Ordenamos primeros los PARES y despues IMPARES
    while (izq < der)
    {
        //Si la izq es IMPAR y la derecha PAR, intercambiamos.
        if (numeros[izq] % 2 != 0 && numeros[der] % 2 == 0)
        {
            temporal = numeros[izq];
            numeros[izq] = numeros[der];
            numeros[der] = temporal;
            izq++;
            der--;
        } 
        // Si ambos son IMPARES
        else if (numeros[izq] % 2 != 0 && numeros[der] % 2 != 0)
        {
            //Solo nos importa si la izq es IMPAR, es decir, la derecha esta en buen lugar
            der--;
        } 
        // Si izq PAR y derecha IMPAR
        else if (numeros[izq] % 2 == 0 && numeros[der] % 2 != 0)
        {
            //Ignoramos y continuamos
            izq++;
            der--;
        }
        //Si tenemos PAR Y PAR
        else if (numeros[izq] % 2 != 0 && numeros[der] % 2 == 0)
        {
            //Continuamos solo en izquierda
            izq++;
        }
    }
    mostrarNumeros(numeros, largo);
    return 0;
}

