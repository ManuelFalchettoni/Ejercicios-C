#include <stdio.h>

void contador(int num){
    for (int i = 1; i <= num; i++)
    {
        printf("%d\n", i);
    }
}
int main(){
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    contador(numero);
    return 0;
}