#include <stdio.h>

int main(){
    
    
    int altura = 5; //Altura de la piramide
    int i, j;

    //Bucle para cada nivel
    for (i = 1; i <= altura; i++)
    {
        //Imprimir espacios en blanco para alinear los asteriscos
        //Nivel 1 (i = 1): 5 - 1 = 4 espacios
        //Nivel 2 (i = 2): 5 - 2 = 3 espacios
        for (j = 1; j <= altura - i; j++){
            printf(" ");
        }
        //Imprimir asteriscos
        // 2 x i - 1
        //Nivel 1 (i = 1): 2 x 1 - 1 = 1 asteriscos
        //Nivel 2 (i = 2): 2 x 2 - 1 = 3 asteriscos
        //Nivel 3 (i = 3): 2 x 3 - 1 = 5 asteriscos
        for (j = 1; j <= 2 * i - 1; j++){
            printf("*");
        }
        //Cambiar de linea despes de cada nivel
        printf("\n");   
    }
    return 0;
    
}