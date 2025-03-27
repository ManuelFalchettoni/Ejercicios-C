#include <stdio.h>

int main(){

    float pesos;
    float conversion = 1364.03;
    float dolares;

    printf("Ingresar cantidad de pesos: ");
    scanf("%f", &pesos);

    dolares = pesos / conversion;
    
    printf("La cantidad de dolares es %f y la conversion es cada dolar a %f pesos\n", dolares, conversion);

    return 0;
}