/*===============================================================

    L01_008.alg - Elabore um algoritmo que receba a idade de uma pessoa (em anos, considerando que j� tenha feito
anivers�rio em 2025). Calcule e mostre em que ano esta pessoa nasceu.

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1� PER�ODO - DISCIPLINA DE ALGORITMO E L�GICA DE PROGRAMA��O
    Nome do aluno(a): Felipe Lara Facin
    1 SEMESTRE 2025
    Prof. Ernani Claudio Borges
    data: Mar�o 2025

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

    int ida, anon;

    //INICIALIZAR VARIAVEIS

    ida = 0;
    anon = 0;

    printf ("\n Informe a sua idade (considerando que ja tenha feito aniversario nesse ano): ");
    fflush (stdin);
    scanf ("%d", &ida);

    anon = 2025 - ida;

    system ("cls");

    printf ("\n O seu ano de nascimento eh %d", anon);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
