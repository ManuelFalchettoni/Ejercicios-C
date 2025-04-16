//1.	Cargar los 10 números aleatorios en un arreglo, validando que estén en el rango de 1 a 1000.
//2.	Mostrar en pantalla únicamente los números primos que fueron ingresados.
//3.	Contar cuántos de los números ingresados son múltiplos de 5.
//4.	Calcular el promedio de los números que no son primos ni múltiplos de 5.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargarArray(int array[], int largo);
void mostrarPrimos(int array[], int largo);
void contarMultiplos(int array[], int largo);
void promedioNoPrimosNiMultiplos(int array[], int largo);



int main(){
    int largo = 10;
    int array[largo];
    cargarArray(array, largo);
    mostrarPrimos(array, largo);
    contarMultiplos(array, largo);
    promedioNoPrimosNiMultiplos(array, largo);
    return 0;
}


void cargarArray(int array[], int largo){
    srand(time(NULL));
    for (int i = 0; i < largo; i++){
        int num = rand() % 1000 + 1;
        array[i] = num;
    }
    printf("Los numeros generados son: \n");
    for (int i = 0; i < largo; i++){
        printf("[%d] ", array[i]);
    }
    printf("\n");
}
void mostrarPrimos(int array[], int largo){
    printf("Los numeros primos son: \n");
    for (int i = 0; i < largo; i++)
    {
        if (array[i] % 2 != 0 && array[i] / array[i] == 1 && array[i] / 1 == array[i])
        {
            printf("[%d] ", array[i]);
        }
    }
    printf("\n");
}
void contarMultiplos(int array[], int largo){
    int contador = 0;
    for (int i = 0; i < largo; i++){
        if (array[i] % 5 == 0){
            contador++;
        }
    }
    printf("La cantidad de numeros multiplos de 5 es: %d\n", contador);
}
void promedioNoPrimosNiMultiplos(int array[], int largo){
    float suma = 0;
    int contador = 0;
    for (int i = 0; i < largo; i++){
        if (array[i] % 5 != 0 && array[i] % 2 == 0){
            suma += array[i];
            contador++;
        }
    }
    if (contador > 0){
        printf("El promedio de los numeros que no son primos ni multiplos de 5 es: %.2f\n", suma / contador);
    }else{
        printf("No hay numeros que cumplan con la condicion.\n");
    }
}


