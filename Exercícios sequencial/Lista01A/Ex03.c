/*===============================================================

    3) Elaborar um algoritmo que receba o salário base de um funcionário, calcule e mostre o salário a receber,
sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e que paga imposto de 7% sobre
salário base.

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

    float salBase, salReceba;

    //INICIALIZAR VARIAVEIS

    salBase = 0;
    salReceba = 0;

    printf ("\n Informe o salario base: ");
    fflush (stdin);
    scanf ("%f", &salBase),

    salReceba = salBase + (salBase * 0.05) - (salBase * 0.07);

    system ("cls");

    printf ("\n O salario a receber eh: %.2f", salReceba);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
