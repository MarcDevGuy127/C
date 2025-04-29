#include <stdio.h>
#include <stdlib.h>

void soma(int a, int b, int *ptrA, int *ptrB);
void subtracao(int a, int b, int *ptrA, int *ptrB);
void multiplicacao(int a, int b, int *ptrA, int *ptrB);
void divisao(int a, int b, int *ptrA, int *ptrB);

int main()
{
    int a = 10;
    int b = 100;
    int *ptrA, *ptrB;
    ptrA = &a;
    ptrB = &b;

    soma(a, b, ptrA, ptrB);

    *ptrA = 80;
    *ptrB = 50;

    subtracao(a, b, ptrA, ptrB);

    *ptrA = 40;
    *ptrB = 2;

    multiplicacao(a, b, ptrA, ptrB);

    *ptrA = 120;
    *ptrB = 8;

    divisao(a, b, ptrA, ptrB);

    return 0;
}

void soma(int a, int b, int *ptrA, int *ptrB) {
    //printf("\n\n");
    printf("SOMA\n");
    printf("Valor de int *ptrA: %d\n", *ptrA);
    printf("Valor de int *ptrB: %d\n", *ptrB);
    printf("Valor de int a: %d\n", a);
    printf("Valor de int b: %d\n", b);
    printf("Soma de *ptrA e *ptrB: %d\n", *ptrA+*ptrB);
}

void subtracao(int a, int b, int *ptrA, int *ptrB) {
    printf("\n\n");
    printf("SUBTRACAO\n");
    printf("Valor de int *ptrA: %d\n", *ptrA);
    printf("Valor de int *ptrB: %d\n", *ptrB);
    printf("Valor de int a: %d\n", a);
    printf("Valor de int b: %d\n", b);
    printf("Subtracao de *ptrA e *ptrB: %d\n", *ptrA-*ptrB);
}

void multiplicacao(int a, int b, int *ptrA, int *ptrB) {
    printf("\n\n");
    printf("MULTIPLICACAO\n");
    printf("Valor de int *ptrA: %d\n", *ptrA);
    printf("Valor de int *ptrB: %d\n", *ptrB);
    printf("Valor de int a: %d\n", a);
    printf("Valor de int b: %d\n", b);
    printf("Multiplicacao de *ptrA e *ptrB: %d\n", *ptrA * *ptrB);
}

void divisao(int a, int b, int *ptrA, int *ptrB) {
    printf("\n\n");
    printf("DIVISAO\n");
    printf("Valor de int *ptrA: %d\n", *ptrA);
    printf("Valor de int *ptrB: %d\n", *ptrB);
    printf("Valor de int a: %d\n", a);
    printf("Valor de int b: %d\n", b);
    printf("Divisao de *ptrA e *ptrB: %.2f\n", (float)*ptrA / *ptrB); //casting para funcionar divisao
}
