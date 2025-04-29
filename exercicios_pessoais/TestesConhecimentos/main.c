#include <stdio.h>
#include <stdlib.h>

void display(int var, int *ptr); //declarando uma funcao(passando a variavel var e ponteiro pra ela).
void atualizar(int *p); //vamos tentar atualizar var com esta funcao
int main() {


    int var = 15;

    int *ptr;

    ptr = &var;

    display(var, ptr); //chamando a funcao display onde eu passo var e o ptr
    //*ptr = 73;

    atualizar(&var);//atualizando o valor contido dentro do endereço de memória de var, através da funcao atualizar

    printf("Atualizando o conteudo do endereco onde a var esta para %d \n", *ptr);

    display(var, ptr);

    printf("\n\n"); //pulando linha
}

void display(int var, int *ptr) //encorpando/estruturando a funcao
{
    printf("O valor de var    : %d \n", var);
    printf("O valor de &var   : %p \n", &var);
    printf("O valor de *ptr   : %d \n", *ptr); //conteudo apontado por *ptr
    printf("O valor de ptr    : %p \n", ptr); //endereco de memoria apontado por ppr (endereco de var)
    printf("O endereco de ptr : %p \n", &ptr); //endereco de memoria do ponteiro ppr

    // Ponteiros:
    // *ptr : o apontado por, tem o conteudo do endereco da variavel que ptr aponta
    //  ptr : vou ver o proprio endereco da variavel
    // &ptr : vou ver o proprio endereco de memoria do ponteiro
}

void atualizar(int *p)
{
    *p = *p+1; //somar mais um
}
