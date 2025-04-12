#include <stdio.h>

int main(){
    int nums[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d", &nums[i]);
    }
    for (int i = 9; i > -1; i--)
    {
        printf("%d", nums[i]);
    }
    
    


    return 0;
}