#include <stdio.h>

int main(){

    int numeroUno;
    int numeroDos;

    printf("Ingresar el primer numero: ");
    scanf("%d", &numeroUno);
    

    printf("Ingresar el segundo numero: ");
    scanf("%d", &numeroDos);
    int suma = numeroUno + numeroDos;

    printf("%d\n", numeroUno);
    printf("%d\n", numeroDos);
    printf("La suma de ambos numeros es %d\n", suma);


    return 0;
}