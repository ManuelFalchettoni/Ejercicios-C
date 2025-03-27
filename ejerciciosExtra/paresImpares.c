#include <stdio.h>

int main(){

    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("El numero %d es par", n);
    }else{
        printf("El numero %d es impar", n);
    };
    return 0;
}