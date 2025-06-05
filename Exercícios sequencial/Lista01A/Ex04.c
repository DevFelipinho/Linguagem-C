/*===============================================================

    4) Elaborar um algoritmo que receba o valor de um depósito bancário feito em sua conta de poupança por
ter acertado os seis números da mega-sena. Processar e mostrar o valor do juros referente a 30 dias de
aplicação (receber o índice percentual mensal). Mostrar também o valor total acumulado no primeiro mês
desta aplicação.


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

    float dep, ind, jur, tot;

    //INICIALIZAR VARIAVEIS

    dep = 0;
    ind = 0;
    jur = 0;
    tot = 0;

    printf ("\n Informe o valor a ser depositado na poupanca: ");
    fflush (stdin);
    scanf ("%f", &dep);

    printf ("\n Informe o indice percentual mensal: ");
    fflush (stdin);
    scanf ("%f", &ind);

    ind = ind / 100;

    jur = dep * ind;

    tot = dep + jur;

    system ("cls");

    printf ("\n O valor do juros no primeiro mes eh: %.2f", jur);
    printf ("\n\n O valor total acumulado no primeiro mes eh: %.2f", tot);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
