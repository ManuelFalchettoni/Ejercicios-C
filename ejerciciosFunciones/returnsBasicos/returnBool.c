#include <stdio.h>

int esPositivo(int numero) {
    return numero > 0;
}


int main(){
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    if (esPositivo(num)) {
        printf("El numero es positivo.\n");
    } else {
        printf("El numero no es positivo.\n");
    }
    return 0;
}