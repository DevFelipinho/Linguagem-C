/*===============================================================

    5) Elabore um algoritmo que calcule mostre o valor da �rea de um tri�ngulo.
Sabe-se que: �rea = (base * altura) / 2

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

    float alt, base, area;

    //INICIALIZAR VARIAVEIS

    alt = 0;
    base = 0;
    area = 0;

    printf ("\n Informe a base do triangulo: ");
    fflush (stdin);
    scanf ("%f", &base);

    printf ("\n Informe a altura do triangulo: ");
    fflush (stdin);
    scanf ("%f", &alt);

    area = (base * alt) / 2.0;

    system ("cls");

    printf ("\n A area do triangulo eh: %.2f", area);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
