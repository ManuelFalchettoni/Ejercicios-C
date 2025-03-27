#include <stdio.h>

int main(){

    //Base impinible (precio sin IVA)
    float baseImponible;

    printf("Ingresar base imponible: ");
    scanf("%f", &baseImponible);

    //Definir el porcentaje de IVA (21%)
    float iva = 0.21;

    //Calcular el total
    float totalFactura = baseImponible * (1 + iva);

    //Mostrar los resultados
    printf("Base imponible: %.2f pesos\n", baseImponible);
    printf("IVA (21%%): %.2f pesos\n", baseImponible * iva);
    printf("Total de la factura: %.2f pesos\n", totalFactura);

    return 0;
}