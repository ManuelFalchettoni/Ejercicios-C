#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL)); //Inicializar semilla
    int numero[20];
    int cuadrado[20];
    int cubo[20];

    for (int i = 0; i < 20; i++)
    {
        numero[i]= rand() % 101;
        printf("%d\n", numero[i]);
    }
    //Llenar cuadrados
    printf("Cuadrado");
    for (int i = 0; i < 20; i++)
    {
        cuadrado[i]= numero[i] * numero[i];
        printf("%d\n", cuadrado[i]);
    }
    //Llenar cubo
    printf("Cubo");
    for(int i = 0; i < 20; i++)
    {
        cubo[i]= numero[i]*numero[i]*numero[i];
        printf("%d\n", cubo[i]);
    }

    //Matrix
    printf("Numero, Cuadrado, Cubo\n");
    for (int j = 0; j < 20; j++)
        {
            printf("%d, %d, %d\n", numero[j], cuadrado[j], cubo[j]);
        }
        printf("\n");
    
    return 0;
}