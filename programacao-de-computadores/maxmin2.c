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
    *max = vet[0];
    *min = vet[0];

    for (int i = 1; i < TAM_VETOR; i++)
    {
        if (vet[i] > *max)
        {
            *max = vet[i];            
        }
        if (vet[i] < *min)
        {
            *min = vet[i];
        }
    }
}