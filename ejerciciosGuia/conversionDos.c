#include <stdio.h>

int main(){

    float pesos;
    float conversion = 1364.03;
    float dolares;

    printf("Ingresar cantidad de dolares: ");
    scanf("%f", &dolares);

    pesos = dolares * conversion;
    
    printf("La cantidad de pesos es %f y la conversion es cada dolar a %f pesos\n", pesos, conversion);

    return 0;
}