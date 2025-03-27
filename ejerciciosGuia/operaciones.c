#include <stdio.h>

int main(){

    int n;

    printf("Ingrese un numero ");
    scanf("%d", &n);

    printf("%d\n", n++);
    printf("%d\n", ++n);
    printf("%d\n", --n);
    printf("%d\n", n--);



    return 0;
}