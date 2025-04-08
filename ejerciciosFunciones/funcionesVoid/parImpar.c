#include <stdio.h>

void parOImpar(int num) {
    if (num % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }
}

int main(){
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    parOImpar(num);
    return 0;
}