#include <stdio.h>

void hastaPositivo(){
    int num = 0;
    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
    } while (num <= 0);
}

int main(){
    hastaPositivo();
    return 0;
}