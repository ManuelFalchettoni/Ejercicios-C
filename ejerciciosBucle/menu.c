#include <stdio.h>

int main(){
    int op = 0, num1 = 0, num2 = 0;
    float res = 0;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    do
    {
        printf("1. Sumar dos numeros\n2. Restar dos numeros\n3. Multiplicar dos numeros\n4. dividir dos numeros\n5. Salir\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            res = num1 + num2;
            break;
        case 2:
            res = num1 - num2;
            break;
        case 3:
            res = num1 * num2;
            break;
        case 4:
            res = num1 / num2;
            break;
        default:
            break;
        }
        printf("%.2f\n", res);
    } while (op != 5);
    return 0;
}