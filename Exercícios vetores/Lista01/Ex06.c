/*===============================================================

    Lista01_vetor_ex06 � Elabore um algoritmo que receba dois vetores A e B de 20 elementos cada do tipo real.
Construir um vetor C de mesmo tipo e dimens�o, o qual ser� formador por: �Todo elemento de B
dever� ser MULTIPLICADO com conte�do contido na posi��o correspondente de A�. Ap�s
processar, limpar a tela e mostrar o Vetor A, o vetor B e finalmente o Vetor C.

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1� PER�ODO - DISCIPLINA DE ALGORITMO E L�GICA DE PROGRAMA��O
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
//============== LOCAL PARA CRIAR OS M�DULOS DE FUN��ES =========
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

    srand (time(NULL));

    for(i = 0; i<tam ; i++)
        a[i] = 0;

    for(i = 0; i<tam ; i++)
        a[i] = rand() % (10);

    for(i = 0; i<tam ; i++)
        b[i] = 0;

    for(i = 0; i<tam ; i++)
        b[i] = rand() % (10);

    for(i = 0; i<tam ; i++)
        c[i] = 0;

    for(i = 0; i<tam ; i++)
        c[i] = a[i] * b[i];

    for(i = 0; i<tam ; i++)
        printf ("\n Vetor A[%d] = %.2f", i, a[i]);

    for(i = 0; i<tam ; i++)
        printf ("\n Vetor B[%d] = %.2f", i, b[i]);

    for(i = 0; i<tam ; i++)
        printf ("\n Vetor C[%d] = %.2f", i, c[i]);

    //INICIALIZAR VARIAVEIS

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
