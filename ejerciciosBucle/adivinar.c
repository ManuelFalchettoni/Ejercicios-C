#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int aletorio = rand() % 101;
    int intento = 0;
    int cont = 1;
    int respuesta;

    while (cont <= 6)
    {
        printf("Ingresar un numero para adivinar: \n");
        scanf("%d", &intento);

        if (intento == aletorio)
        {
            printf("Haz acertado \n");
            cont = 10;
        } else{
            if (intento < aletorio)
            {
                printf("El numero aleatorio es mayor\n");
            }else{
                printf("El numero aleatorio es menor\n");
            }
            cont++;
        };

        if (cont == 6)
        {
            printf("Ingrese 1 para volver a jugar, ingrese 2 para salir. \n");
            scanf("%d", &respuesta);

            switch (respuesta)
            {
            case 1:
                cont = 1;
                break;
            case 2:
                printf("Adios!\n");
            default:
                break;
            }
        }
    }
    return 0;
}