#include <stdio.h>

int main(){
    int num, res;

    printf("Ingrese un numero: \n");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        res = num * i;
        printf("%d x %d = %d\n", num, i, res);
    }
    return 0;
}