/*===============================================================

    Lista02_vetor_ex06 – Elabore um algoritmo que receba um vetor de 15 posições com números inteiros,
processar e mostrar (limpar a tela):
 a) o vetor inicial;
 b) quais são os elementos de índice PAR e o valor da SOMA entre esses elementos;
 c) quais são os elementos de índices IMPAR e o valor do PRODUTO (multiplicação) entre eles .

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

#define tam 15

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================






//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================

//===============================================================

//===============================================================

//===============================================================

//===============================================================

//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //CRIAR VARIAVEIS

    int v[tam], i, soma, mult;

    //INICIALIZAR VARIAVEIS

    srand(time(NULL));
    soma = 0;
    mult = 1;

    for(i = 0; i<tam; i++)
    {
        v[i] = 0;
    }

    for(i = 0; i<tam; i++)
    {
        v[i] = rand() % (10);
    }

    for(i = 0; i<tam; i++)
    {
        printf ("\n Vetor[%d] = %d", i, v[i]);
    }

    printf ("\n\n");

    for(i = 0; i<tam; i+=2)
    {
        printf ("\n Vetor[%d] = %d", i, v[i]);
        soma+=v[i];
    }

    printf ("\n");

    printf ("\n Soma dos indices pares: %d", soma);

    printf ("\n\n");

    for(i = 1; i<tam; i+=2)
    {
        printf ("\n Vetor[%d] = %d", i, v[i]);
        mult*=v[i];
    }

    printf ("\n");

    printf ("\n Produto dos indices impares: %d", mult);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
