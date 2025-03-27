#include <stdio.h>

int main(){
    int num;
    printf("Ingrese un numero del 1 al 7: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("El dia de la semana es Lunes\n ");
        break;
    case 2:
        printf("El dia de la semana es Martes\n ");
        break;
    case 3:
        printf("El dia de la semana es Miercoles\n ");
        break;
    case 4:
        printf("El dia de la semana es Jueves\n ");
        break;
    case 5:
        printf("El dia de la semana es Viernes\n");
        break;
    case 6:
        printf("El dia de la semana es Sabado\n");
        break;
    case 7:
        printf("El dia de la semana es Domingo\n");
        break;
    default:
        break;
    }





    return 0;
}