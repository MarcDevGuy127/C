#include <stdio.h>
#include <stdlib.h>

void imprimir(int var, int *ptr);

int main()
{
    int var = 15;
    int *ptr;
    ptr = &var;

    imprimir(var, ptr);

    *ptr = 13;

    imprimir(var, ptr);

    return 0;
}

void imprimir(int var, int *ptr)
{
    printf("\n\n");
    printf("Valor de var: %d \n", var);
    printf("Endereco de &var: %p \n", (void*)&var);
    printf("Valor de *ptr: %d \n", *ptr);
    printf("Endereco apontado por ptr: %p \n", (void*)ptr);
    printf("Endereco de ptr: %p \n", (void*)&ptr);
}
