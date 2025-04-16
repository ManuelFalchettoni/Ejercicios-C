//Hecho por inteligencia artificial, para ver de que manera lo hace, y tener un ejemplo de como hacerlo.
//Separar los pares de los impares en un array de 10 elementos, usando un while, y solo modificando el array original. Y sin crear arrays auxiliares.



//Ordenar un array de 10, poniendo los impares a lo ultimo, y los pares primeros, usando un while, y solo modificando el array original. Y sin crear arrays auxiliares.
//Ejemplo: [1,2,3,4,5,6] => [2,4,6,1,3,5]
//Ejemplo: [1,3,5,7] => [1,3,5,7]


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 100
#define MIN 1

int main(){
    int array[TAM];
    int i = 0, j = 0, aux = 0;
    srand(time(NULL));
    //Rellenar el array con numeros aleatorios entre 1 y 100
    while(i < TAM){
        array[i] = rand() % (MAX - MIN + 1) + MIN;
        i++;
    }
    //Imprimir el array original
    printf("Array original:\n");
    for(i = 0; i < TAM; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    //Separar los pares de los impares
    i = 0;
    while(i < TAM){
        if(array[i] % 2 != 0){
            j = i + 1;
            while(j < TAM && array[j] % 2 != 0){
                j++;
            }
            if(j < TAM){
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
        i++;
    }
    //Imprimir el array separado
    printf("Array separado:\n");
    for(i = 0; i < TAM; i++){
        printf("%d ", array[i]);
    }
    printf("\n");






    return 0;
}

