#include <stdio.h>
void mostrarMayorMin(int n[], int largo, int max, int min){
    for (int i = 0; i < largo; i++)
    {
        if(n[i] == max){
            printf("%d --> Numero mayor\n",n[i]);
        }else if(n[i] == min){
            printf("%d --> Numero menor\n", n[i]);
        }else{
            printf("%d\n", n[i]);
        };
    }
    

    
}
int main(){
    int nums[10];
    int cont = 0;
    do
    {
        printf("Ingrese un numero: \n");
        scanf("%d", &nums[cont]);
        cont++;
    } while (cont < 10);

    int max = nums[0];
    int min = nums[0];

    for (int i = 0; i < 10; i++)
    {
        if (nums[i]>max)
        {
            max = nums[i];
        }else if(nums[i]<min){
            min = nums[i];
        } 
    }
    mostrarMayorMin(nums, 10, max, min);
    return 0;
}