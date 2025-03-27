#include <stdio.h>

int main(){
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if (num % 2 != 0)
    {
        if (num % num == 0 && num % 1 == 0 )
        {
        printf("El numero %d es primo", num);
        }
    }else{
        printf("El numero %d NO es primo", num);
    }
    return 0;
}