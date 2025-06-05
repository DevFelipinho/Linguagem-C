/*===============================================================

    L01_002.alg - Elabore um algoritmo que leia duas variáveis A e B, troque seus valores (conteúdos) e mostre no
vídeo.

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1º PERÍODO - DISCIPLINA DE ALGORITMO E LÓGICA DE PROGRAMAÇÃO
    Nome do aluno(a): Felipe Lara Facin
    1 SEMESTRE 2025
    Prof. Ernani Claudio Borges
    data: Março 2025

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

    int nr1, nr2, nr3;

    //INICIALIZAR VARIAVEIS

    nr1 = 0;
    nr2 = 0;
    nr3 = 0;

    printf ("\n Informe o primeiro numero: ");
    fflush (stdin);
    scanf ("%d", &nr1);

    printf ("\n Informe o segundo numero: ");
    fflush (stdin);
    scanf ("%d", &nr2);

    nr3 = nr1;
    nr1 = nr2;
    nr2 = nr3;

    system ("cls");

    printf ("\n Seu primeiro numero agora eh %d e seu segundo numero eh %d.", nr1, nr2);


    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}

