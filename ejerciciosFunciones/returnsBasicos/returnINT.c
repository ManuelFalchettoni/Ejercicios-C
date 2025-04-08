#include <stdio.h>

int cuadrado(int n){
    n = n * n;
    return n;
}

int main(){
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    printf("El cuadrado de %d es: %d", num, cuadrado(num));
    return 0;
}