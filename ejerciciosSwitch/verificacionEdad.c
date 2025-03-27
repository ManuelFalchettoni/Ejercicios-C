#include <stdio.h>

int main(){
    int edad;

    printf("Ingresar edad: ");
    scanf("%d", &edad);

    if (edad > 18)
    {
        printf("Podes votar");
    }else if (edad >= 16 && edad <=17)
    {
        printf("Podes votar con permisos de tus padres");
    }else{
        printf("No podes votar");
    }
    return 0;
}