//Escriba un programa en C que permita al usuario cargar 12 números enteros (entre 1 y 100) en un arreglo. Luego, realice las siguientes tareas utilizando funciones:

//•	Una función para cargar el arreglo
//•	Una función para calcular el promedio
//•	Una función debe contar cuántos números son mayores al promedio de todos los números ingresados y retornar ese valor.
//•	Otra función debe imprimir solo los números pares.

//Requisitos:

//•	Utilizar al menos dos funciones además del main.
//•	Validar que los números ingresados estén en el rango de 1 a 100. (El programa debe volver a pedirlo si se va de rango)
//•	No usar variables globales.
//Pista para validar:
//	Usás un do...while porque querés pedir al menos una vez.
//Si está mal, mostrás un mensaje y lo pedís de nuevo.
//Comprobás si num está fuera del rango permitido.

#include <stdio.h>

void cargarArray(int array[], int largo);
void calcularPromedio(int array[], int largo, float *promedio);
int mayoresPromedio(int array[], int largo, float promedio);
void numerosPares(int array[], int largo);

int main(){
    int numeros[12];
    float promedio = 0;

    cargarArray(numeros, 12);
    calcularPromedio(numeros, 12, &promedio);
    printf("Numeros mayores al promedio: %d\n", mayoresPromedio(numeros, 12, promedio));
    numerosPares(numeros, 12);




    return 0;
}

void cargarArray(int array[], int largo){
    printf("Cargar el array: \n");
    int num;
    int cont = 0;
    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        if (num < 1 || num > 100)
        {
            printf("El numero debe estar entre 1 y 100\n");
        }
        else
        {
            array[cont] = num;
            cont++;
        }
    } while (cont < 12);
}
void calcularPromedio(int array[], int largo, float *promedio){
    //Calcular el promedio
    int suma = 0;
    for (int i = 0; i < largo; i++)
    {
        suma += array[i];
    }
    *promedio = (float)suma / largo;
    printf("Promedio total:%f\n", *promedio);
}
int mayoresPromedio(int array[], int largo, float promedio){
    int mayoresAlPromedio = 0;
    for (int i = 0; i < largo; i++)
    {
        if (array[i] > promedio)
        {
            mayoresAlPromedio++;
        }
    }
    return mayoresAlPromedio;
}
void numerosPares(int array[], int largo){
    printf("Numeros pares: \n");
    for (int i = 0; i < largo; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("%d\n", array[i]);
        }  
    }
}