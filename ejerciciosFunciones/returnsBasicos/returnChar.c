#include <stdio.h>

char diaDeLaSemana(int numero) {
    switch (numero) {
        case 1: return 'L'; // Lunes
        case 2: return 'M'; // Martes
        case 3: return 'X'; // Miércoles
        case 4: return 'J'; // Jueves
        case 5: return 'V'; // Viernes
        case 6: return 'S'; // Sábado
        case 7: return 'D'; // Domingo
        default: return '?'; // Valor inválido
    }
}

int main(){
    int num;
    printf("Ingrese el numero del dia de la semana: ");
    scanf("%d", &num);

    printf("El numero %d equivale al dia de la semana %c", num, diaDeLaSemana(num));

    return 0;
}