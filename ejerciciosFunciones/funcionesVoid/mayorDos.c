#include <stdio.h>

void mayor(int num1, int num2){
    if(num1 > num2){
        printf("El mayor es %d", num1);
    }else{
        printf("El mayor es %d", num2);
    }
}
int main(){
    int num1, num2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    mayor(num1, num2);
    return 0;
}