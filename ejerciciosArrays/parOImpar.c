#include <stdio.h>

int main(){
    int cont = 0;
    int nums[8];
    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &nums[cont]);
        cont++;
    } while (cont < 8);
    for (int i = 0; i < 8; i++)
    {
        if (nums[i] % 2 == 0)
        {
            printf("%d par\n", nums[i]);
        }else{
            printf("%d impar\n", nums[i]);
        }
    }
    return 0;
}