/*===============================================================

    Lista01_vetor_ex04 � Elabore um algoritmo que receba um vetor de 15 posi��es com n�meros inteiros. Criar um
vetor B de mesmo tipo e dimens�o de A, o qual ser� formado por: �Todo elemento de B dever� ser
o quadrado de A correspondente�. Apresentar no v�deo a vetor A e depois o vetor B.

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

#define tam 15

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

    int a[tam], b[tam], i;

    srand (time(NULL));

    for(i =0; i<tam; i++)
        a[i] = 0;

    for(i =0; i<tam; i++)
        a[i] = rand() % (10);

    for(i =0; i<tam; i++)
        b[i] = 0;

    for(i =0; i<tam; i++)
        b[i] = pow (a[i],2);

    for(i =0; i<tam; i++)
        printf ("\n Vetor A[%d] = %d", i, a[i]);

    for(i =0; i<tam; i++)
        printf ("\n Vetor B[%d] = %d", i, b[i]);

    //INICIALIZAR VARIAVEIS

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
