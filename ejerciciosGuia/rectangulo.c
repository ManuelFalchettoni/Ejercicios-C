#include <stdio.h>

int main(){

    float base;
    float altura;

    printf("Ingrese la base del rectangulo: ");
    scanf("%f", &base);

    printf("Ingrese la altura del rectangulo: ");
    scanf("%f", &altura);

    float area = base * altura;

    printf("El area del rectangulo es: %.2f", area);

    return 0;
}