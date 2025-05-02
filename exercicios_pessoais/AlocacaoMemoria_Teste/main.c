#include <stdio.h>
#include <stdlib.h> //biblioteca para malloc

int main()
{
    int *x;
    //x = malloc(sizeof(int)); //o parametro e o tamanho de bites. malloc nao possui um valor definido ao inicializar.
    x = calloc(1, sizeof(int));
    //os parametros de calloc() sao: qntde de elementos que irei alocar memoria e a qntde de memoria a ser utilizada por cada elemento.
    //calloc inicializa com o valor 0
    //free() libera memoria alocada/reservada

    if(x) {
        printf("Alocacao realizada com sucesso!\n");
        printf("x : %d\n", *x);
        *x = 13;
        printf("x : %d\n", *x);
    } else {
        printf("Falha na alocacao!\n");
    }
    free(x);//o parametro é o ponteiro da memoria alocada que sera liberado o seu espaco
    return 0;
}
