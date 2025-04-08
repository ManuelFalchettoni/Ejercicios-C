#include <stdio.h>

float baseAltura(float base, float altura){
    float area = ((base * altura)/2);
    return area;
}
int main(){
    float base, altura;
    printf("Ingrese la base del traingulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del traingulo: ");
    scanf("%f", &altura);

    printf("El area del triangulo es %.2f", baseAltura(base, altura));
    return 0;
}