#include <stdio.h>

const int TAM_VETOR = 10;

void maxMin2(int vet[], int *max, int *min);

int main()
{   
    int vetor[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int maximo, minimo;

    maxMin2(vetor, &maximo, &minimo);

    printf("O valor maximo é: %d\n", maximo);
    printf("O valor minimo é: %d\n", minimo);

    return 0;
}

void maxMin2(int vet[], int *max, int *min)
{
    int i;

    // Inicializa max e min com o primeiro elemento se o array tem comprimento impar
    if (TAM_VETOR % 2 == 1) {
        *max = vet[0];
        *min = vet[0];
        i = 1;  // Começa a partir do segundo elemento
    } else {
        // Compara os dois primeiros elementos para inicializar max e min
        if (vet[0] > vet[1]) {
            *max = vet[0];
            *min = vet[1];
        } else {
            *max = vet[1];
            *min = vet[0];
        }
        i = 2;  // Começa a partir do terceiro elemento
    }

    // Compara elementos em pares
    while (i < TAM_VETOR) {
        if (vet[i] > vet[i+1]) {
            if (vet[i] > *max) {
                *max = vet[i];
            }
            if (vet[i+1] < *min) {
                *min = vet[i+1];
            }
        } else {
            if (vet[i+1] > *max) {
                *max = vet[i+1];
            }
            if (vet[i] < *min) {
                *min = vet[i];
            }
        }
        i += 2;  // Vai para o próximo par
    }
}