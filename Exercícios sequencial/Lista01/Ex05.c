/*===============================================================

    L01_005.alg - Elabore um algoritmo que leia (receba) um valor correspondente a graus Farenheit. Calcule e
apresente a conversão deste valor para graus Celsius.
Utilize a fórmula:
C = 5 / 9 * (F - 32)
Onde: C representa o grau Celsius e F representa grau Farenheit.


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

    float fare, cel;

    //INICIALIZAR VARIAVEIS

    fare = 0;
    cel = 0;

    printf ("\n Informe os graus em Farenheit: ");
    fflush (stdin);
    scanf ("%f", &fare);

    cel = 5.0 / 9.0 * (fare - 32.0);

    system ("cls");

    printf ("\n Os graus convertidos para Celsius eh: %.2f", cel);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
