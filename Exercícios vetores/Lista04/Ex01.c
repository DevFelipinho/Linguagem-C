/*===============================================================

    Lista04_vetor_ex01 – Receber 50 números em um vetor do tipo inteiro (validar para que sejam MAIOR QUE
ZERO). Após receber os 50 números, limpar a tela, mostrar o vetor em forma normal de entrada. Após a
amostragem, receber um (1) número qualquer e procurar no vetor a existência desse número, caso exista
mostrar qual a posição (índice) do vetor ele está (ou em quais posições estão se houver mais de um), caso
não exista esse número, mostrar uma mensagem.
 Fazer de forma que o usuário possa informar outro número de pesquisa, mantendo os números do
vetor de entrada sem alterar, ou finalizar o algoritmo caso seja digitado o número ZERO para este
número de pesquisa.


    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1º PERÍODO - DISCIPLINA DE ALGORITMO E LÓGICA DE PROGRAMAÇÃO
    Nome do aluno(a): Felipe Lara Facin
    1 SEMESTRE 2025
    Prof. Ernani Claudio Borges
    data: Maio 2025

*/
//===============================================================
//===============================================================
//======== LOCAL PARA DECLARAR AS INCLUDES E VARS GLOBAIS =======
//===============================================================
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

#define tam 50

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================
void entrada (int v[]);
void entradan (int *x);
void posicao (int *num, int *v, int *cont, int *i);



//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================
void entrada (int v[])
{
    int i;

    for(i=0; i<tam; i++)
    {
        v[i] = 1 + rand() % (tam);
        printf ("\n Vetor[%d] = %d", i, v[i]);
    }

}
//===============================================================
void entradan (int *x)
{
    printf ("\n Informe um numero: ");
    fflush (stdin);
    scanf ("%d", &*x);
}
//===============================================================
void posicao (int *num, int *v, int *cont, int *i)
{
    if (*num == *v)
    {
        printf ("\n Posicao[%d]", *i);
        *cont += 1;
    }
}
//===============================================================

//===============================================================

//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //CRIAR VARIAVEIS

    int v[tam], i, num, cont;

    //INICIALIZAR VARIAVEIS

    srand(time(NULL));

    num = 1;
    cont = 0;

    for(i=0; i<tam; i++)
        v[i] = 0;

    entrada(v);

    printf ("\n\n\n\n Pressione qualquer tecla para continuar.");

    getch();

    system ("cls");

    while (num > 0)
    {
        entradan(&num);

        if (num>0)
        {
            for(i=0; i<tam; i++)
            {
                posicao (&num, &v[i], &cont, &i);
            }

            if (cont == 0)
                printf ("\n Nao teve posicoes.");

            cont = 0;
        }
    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
