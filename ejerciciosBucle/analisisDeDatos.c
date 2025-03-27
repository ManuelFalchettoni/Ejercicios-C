#include <stdio.h>

int main(){
    int sum = 0, cont = 0, num = 0, mayor = 0, menor = 0, pares = 0, impares = 0;
    float promedio = 0;
    do
    {
        printf("Ingresar un dato: \n");
        scanf("%d", &num);
        if (num != 0)
        {
            //Primer menor
            if (cont == 0)
            {
            menor = num;
            };
            //Mayor y menor
            if (num > mayor)
            {
            mayor = num;
            } else if (num < menor)
            {
            menor = num;
            };
            //Pares e impares
            if(num % 2 == 0){
            pares++;
            }else{
                impares++;
            }
            //Suma total
            sum += num;
        cont++;
        }else{
            printf("%d es la suma total de numeros ingresados\n", sum);
            printf("%.2f es el promedio de los datos ingresados\n", promedio = sum / (float)cont);
            printf("%d es la cantidad de numeros pares\n", pares);
            printf("%d es la cantidad de numeros impares\n", impares);
        }
    } while (num != 0);
    return 0;
}