/*===============================================================

    Lista02_vetor_ex07 – Elabore um algoritmo que receba um vetor de 10 posições de números inteiros. Esse vetor
deve ser montado da seguinte forma:
 a) os índices PARES devem receber os números de 6 a 10;
 b) os índices ÍMPARES devem receber os números de 1 a 5.
 No final, limpar a tela e mostrar o vetor
 obs.: não receber nada via teclado.

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

#define tam 10

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

    int v[tam], i;

    //INICIALIZAR VARIAVEIS

    srand(time(NULL));

    for(i = 0; i<tam; i++)
    {
        v[i] = 0;
    }

    for(i = 0; i<tam; i+=2)
    {
        v[i] = 1 + rand() % (5);
        printf ("\n Vetor[%d] = %d", i, v[i]);

    }

    for(i = 1; i<tam; i+=2)
    {
        v[i] = 6 + rand() % (5);
        printf ("\n Vetor[%d] = %d", i, v[i]);
    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
