#include <stdio.h>

void saludar(){
    printf("Hola, bienvenido a C!\n");
}
void nombre(char nombre[]){
    printf("Hola, %s", nombre);
}

int main(){
    char name[50];
    saludar();
    printf("Ingrese su nombre: ");
    scanf("%s", name);
    nombre(name);
    return 0;
}