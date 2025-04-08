#include <stdio.h>

int main() {
    char inicio;
    int cantidad;

    printf("Ingresa la letra inicial: ");
    scanf(" %c", &inicio);  // Espacio antes de %c para ignorar espacios anteriores

    printf("Ingresa la cantidad de letras a ingresar: ");
    scanf("%d", &cantidad);

    for (int i = 0; i < cantidad; i++) {
        char esperada = inicio + i;
        char ingresada;

        do {
            printf("Ingresa la letra #%d: ", i + 1);
            scanf(" %c", &ingresada);

            if (ingresada != esperada) {
                printf("Letra incorrecta. Debe ser '%c'. Intenta de nuevo.\n", esperada);
            }

        } while (ingresada != esperada);
    }

    printf("¡Secuencia completada correctamente!\n");
    return 0;
}
