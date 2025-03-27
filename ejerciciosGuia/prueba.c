#include <stdio.h>

int main(){

    int edad;
    float altura;
    char primeraLetra;
    char nombre[20];

    printf("Ingrese su letra inicial: ");
    scanf(" %c", &primeraLetra);

    printf("Ingrese su edad: ");
    scanf("%s", nombre);  // No requiere & porque es un string, los strings en C son arrays, al pedirlo se pasa directamente el ARRAY y no una copia, y eso no es deseable



}

