#include <stdio.h>


double areaCirculo(double radio) {
    double pi = 3.1416;
    return pi * radio * radio;
}

int main(){
    double radio;
    printf("Ingrese el radio del circulo: ");
    scanf("%lf", &radio);
    printf("El area del circulo es %lf", areaCirculo(radio));
    return 0;
}