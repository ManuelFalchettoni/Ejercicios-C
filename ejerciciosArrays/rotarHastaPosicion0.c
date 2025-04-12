#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(){
    int numeros[10];
    int numUsuario;
    printf("Introduce un número entre 0 y 100: ");
    scanf("%d", &numUsuario);
    // Inicializamos el generador de números aleatorios
    srand(time(NULL)); 

    // Llenamos el array con números aleatorios entre 0 y 100
    for (int i = 0; i < 10; i++){
        numeros[i] = rand() % 101;
    }

    // Mostramos el array original
    printf("Array original:\n");
    for (int i = 0; i < 10; i++){
        printf("[%d]", numeros[i]);
    }
    printf("\n");

    int found = 0;
    while (!found) {
        for (int i = 0; i < 10; i++) {
            if (numeros[i] == numUsuario) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("El número no está en el array. Introduce otro número: ");
            scanf("%d", &numUsuario);
        }
    }

    int temp;
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] == numUsuario) {
            temp = numeros[i];
            for (int j = i; j > 0; j--) {
                numeros[j] = numeros[j - 1];
            }
            numeros[0] = temp;
            break;
        }
    }
    // Mostramos el array reorganizado
    printf("Array reorganizado (número %d al principio):\n", numUsuario);
    for (int i = 0; i < 10; i++){
        printf("[%d]", numeros[i]);
    }
    printf("\n");

    
    







    return 0;
}