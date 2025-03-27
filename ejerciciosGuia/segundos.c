#include <stdio.h>

int main(){

    int horas;
    int minutos;
    int segundos;
    int total;

    printf("Ingresar cantidad de horas:");
    scanf("%d", &horas);

    printf("Ingresar cantidad de minutos:");
    scanf("%d", &minutos);
    
    printf("Ingresar cantidad de segundos:");
    scanf("%d", &segundos);

    total = (horas * 60 * 60) + (minutos * 60) + segundos;

    printf("La cantidad de segundos es: %d", total);
    return 0;
}