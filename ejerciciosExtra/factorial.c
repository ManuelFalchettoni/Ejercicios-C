#include <stdio.h>

int main(){

    int num, i;
    long long factorial = 1;

    printf("Ingrese un numero: ");
    scanf("%d", &num);
    if (num > 0)
    {
        for (i = 1; i <= num; i++)
        {
         factorial *= i;
        }
        printf("El factorial es %lld\n", factorial);
    }

    return 0;
}



