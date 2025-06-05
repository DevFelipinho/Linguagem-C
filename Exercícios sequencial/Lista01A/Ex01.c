/*===============================================================

    1) Elaborar um algoritmo que receba quatro notas de um aluno, processar e mostrar o valor da média
aritmética das quatro notas.
Obs.: desprezar verificações/validações de entrada.

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

    float not1, not2, not3, not4, med;

    //INICIALIZAR VARIAVEIS

    not1 = 0;
    not2 = 0;
    not3 = 0;
    not4 = 0;
    med = 0;

    printf ("\n Informe a primeira nota (0 a 10): ");
    fflush (stdin);
    scanf ("%f", &not1);

    while (not1 < 0 || not1 > 10)
    {
        printf ("\n Por favor, informe a primeira nota de 0 a 10: ");
        fflush (stdin);
        scanf ("%f", &not1);
    }

    printf ("\n Informe a segunda nota (0 a 10): ");
    fflush (stdin);
    scanf ("%f", &not2);

    while (not2 < 0 || not2 > 10)
    {
        printf ("\n Por favor, informe a segunda nota de 0 a 10: ");
        fflush (stdin);
        scanf ("%f", &not2);
    }

    printf ("\n Informe a terceira nota (0 a 10): ");
    fflush (stdin);
    scanf ("%f", &not3);

    while (not3 < 0 || not3 > 10)
    {
        printf ("\n Por favor, informe a terceira nota de 0 a 10: ");
        fflush (stdin);
        scanf ("%f", &not3);
    }

    printf ("\n Informe a quarta nota (0 a 10): ");
    fflush (stdin);
    scanf ("%f", &not4);

    while (not4 < 0 || not4 > 10)
    {
        printf ("\n Por favor, informe a quarta nota de 0 a 10: ");
        fflush (stdin);
        scanf ("%f", &not4);
    }

    med = (not1 + not2 + not3 + not4) / 4;

    system ("cls");

    printf ("\n A media aritmetica das notas eh: %.2f", med);



    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
