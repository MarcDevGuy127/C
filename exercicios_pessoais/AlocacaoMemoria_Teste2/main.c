#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*
     int *x;

    x = malloc(sizeof(int)); //o parametro e o tamanho de bites. malloc nao possui um valor definido ao inicializar.
    printf("Valor malloc: %d\n", *x);
    x = calloc(1, sizeof(int)); //os parametros de calloc() sao: qntde de elementos que irei alocar memoria e a qntde de memoria a ser utilizada por cada elemento.
    printf("Valor calloc: %d\n", *x); //vai aparecer 0

    free(x); //o parametro é o ponteiro da memoria alocada que sera liberado o seu espaco

    //modelo ruim para solicitar tamanho de vetor ao usuario
    int tam;

    int vet[tam]; //declaracao classica de um vetor */
    int i, tam, *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    srand(time(NULL)); //usando horario do pc para gerar numeros aleatorios

    vet = malloc(tam * sizeof(int)); // tamanho de bites para int * qntde do tamanho do vetor informado pelo usuário

    if(vet) {
        printf("Memória alocada com sucesso!\n");

        for(i = 0; i < tam; i++) {
            *(vet + i) = rand() % 100; //gerando numeros aleatorios ate no maximo 100
            //acessando ptr com aritmetica
            printf("%d° Valor: %d \n", i, *(vet + i));
        }
    } else {
        printf("Erro ao alocar memória!\n");
    }

    return 0;
}
