#include <stdio.h>


int main(){

    const float iva = 0.21;

    char nombre[50];
    float precio;
    float precioFinal;

    printf("Ingrese el nombre del producto: ");
    scanf("%s", nombre);

    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);
    
    precioFinal = precio * (1 + iva);

    printf("%s\n %.2f\n %.2f\n", nombre, precio, precioFinal);



    return 0;
}