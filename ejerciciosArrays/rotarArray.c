#include <stdio.h>
void rotarDerecha(int arr[], int tam) {
    int ultimo = arr[tam - 1];// Guardo el ultimo valor del array
    for (int i = tam - 1; i > 0; i--) //Empiezo por el ultimo indice, y voy retrocediendo, sin llegar al indice cero, es decir, dejando espacio en el primero
    {
        arr[i] = arr[i - 1]; // Guardo en el indice actual el valor anterior
    }
    arr[0] = ultimo; //Guardo el ultimo valor en el primer indice
    for (int i = 0; i < tam; i++)// Bucle para mostrar valores del array
    {
        printf("%d, ", arr[i]);
    }
    
}
int main(){
    int nums[15];

    for (int i = 0; i < 15; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &nums[i]);
    }
    rotarDerecha(nums, 15);
    return 0;
}