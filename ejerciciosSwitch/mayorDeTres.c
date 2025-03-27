#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("Ingrese un numero: \n");
    scanf("%d", &num1);
    printf("Ingrese un numero: \n");
    scanf("%d", &num2);
    printf("Ingrese un numero: \n");
    scanf("%d", &num3);

    if (num1 == num2 && num2 == num3)
    {
        printf("Los tres numeros son iguales");
    }else if (num1 > num2 && num1 > num3)
    {
        printf("El numero mmayor es %d\n", num1);
    }else if (num2 > num1 && num2 > num3)
    {
        printf("El numero mayor es %d\n", num2);
    }else{
        printf("El numero mayor es %d\n", num3);
    }
    
    
    




    return 0;
}