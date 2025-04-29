#include <stdio.h>

void soma(int a, int b, int *ptrA, int *ptrB);//declaracao de interface da funcao

int main()
{
    int a = 10;
    int b = 100;
    int *ptrA, *ptrB;
    ptrA = &a;
    ptrB = &b;

    soma(a, b, ptrA, ptrB);//usar deferencia * apenas na declaracao de interface e definicao da funcao, nao se usa * nas chamadas/invocacoes

    *ptrA = 80;
    *ptrB = 50;

    soma(a, b, ptrA, ptrB);

    return 0;
}

void soma(int a, int b, int *ptrA, int *ptrB) { //definicao da funcao
    printf("\n\n");
    printf("Valor de int a: %d\n", a);
    printf("Valor de int b: %d\n", b);
    printf("Soma de *ptrA e &ptrB: %d\n", *ptrA + *ptrB);
}
