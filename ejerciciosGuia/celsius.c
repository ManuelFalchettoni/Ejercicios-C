#include <stdio.h>

int main(){

    int celsius;
    float farenheit;

    printf("Ingrese la temperatura en Celsius:");
    scanf("%d", &celsius);

    farenheit = ((celsius * (9.0/5.0)) + 32);

    printf("La temperatura en Farenheit es : %.2f", farenheit);
    return 0;
}