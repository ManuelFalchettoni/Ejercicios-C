//1.	Cargar el arreglo con los 8 números aleatorios, validando que estén entre 100 y 999.
//2.	Contar cuántos de esos números tienen al menos un dígito repetido.
//3.	Calcular y mostrar la suma total de todos los dígitos de los 8 números.
//4.	Mostrar en pantalla aquellos números que tienen todos sus dígitos diferentes.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargarArray(int array[], int largo);
void digitosRepetidos(int array[], int largo);
int sumasDigitos(int array[], int largo);
void mostrarNumerosConDigitosDiferentes(int array[], int largo);

int main(){
    int largo = 8;
    int array[largo];
    cargarArray(array, largo);
    digitosRepetidos(array, largo);
    int suma = sumasDigitos(array, largo);
    printf("La suma total de todos los digitos es: %d\n", suma);
    mostrarNumerosConDigitosDiferentes(array, largo);
    return 0;
}

void cargarArray(int array[], int largo){
    srand(time(NULL));
    for (int i = 0; i < largo; i++)
    {
        int num;
        do
        {
            num = rand() % 900 + 100; // Genera un número entre 100 y 999
        } while (num < 100 || num > 999); // Validación adicional, aunque no debería ser necesaria
        array[i] = num;
    }
    printf("Los numeros generados son: \n");
    for (int i = 0; i < largo; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
void digitosRepetidos(int array[], int largo){
    int cont = 0;
    for (int i = 0; i < largo; i++)
    {
        int num = array[i];
        int digitos[10] = {0};
        while (num > 0)
        {
            int digito = num % 10;
            digitos[digito]++;
            num /= 10;
        }
        for (int j = 0; j < 10; j++)
        {
            if (digitos[j] > 1)
            {
                cont++;
                break;
            }
        }
    }
    printf("Cantidad de numeros con digitos repetidos: %d\n", cont);
}
int sumasDigitos(int array[], int largo){
    int suma = 0;
    for (int i = 0; i < largo; i++)
    {
        int num = array[i];
        while (num > 0)
        {
            suma += num % 10;
            num /= 10;
        }
    }
    return suma;
}
void mostrarNumerosConDigitosDiferentes(int array[], int largo){
    printf("Los numeros con digitos diferentes son: \n");
    for (int i = 0; i < largo; i++)
    {
        int nums = array[i];
        int nums3 = nums % 10;
        int nums2 = nums / 10 % 10;
        int nums1 = nums / 100 % 10;
        if (nums1 != nums2 && nums1 != nums3 && nums2 != nums3)
        {
            printf("%d\n", array[i]);
        }
    }
    
}