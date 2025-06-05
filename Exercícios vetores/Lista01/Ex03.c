/*===============================================================

    Lista01_vetor_ex03 – Elabore um algoritmo que receba dois vetores numéricos chamados A e B com tamanho
de 20 posições do tipo real. Construir um vetor de mesmo tipo e tamanho o qual será formado pela
soma de primeiro elemento de A com o primeiro de B e armazenando na primeira posição de C,
segundo elemento de A com segundo elemento de B armazenando na segunda posição de C, e
assim por diante.

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

#define tam 20

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

    float a[tam], b[tam], c[tam];
    int i;

    //INICIALIZAR VARIAVEIS

    srand (time(NULL));

    for(i = 0; i<tam ; i++)
        a[i] = 0;

    for(i = 0; i<tam ; i++)
        a[i] = rand() % (100);

    for(i = 0; i<tam ; i++)
        b[i] = 0;

    for(i = 0; i<tam ; i++)
        b[i] = rand() % (100);

    for(i = 0; i<tam ; i++)
        c[i] = 0;

    for(i = 0; i<tam ; i++)
        c[i] = a[i] + b[i];


    for(i = 0; i<tam ; i++)
        printf ("\n Vetor a[%d] = %.2f", i, a[i]);

    for(i = 0; i<tam ; i++)
        printf ("\n Vetor b[%d] = %.2f", i, b[i]);

    for(i = 0; i<tam ; i++)
        printf ("\n Vetor c[%d] = %.2f", i, c[i]);



    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
