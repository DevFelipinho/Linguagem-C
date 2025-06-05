/*===============================================================

    Lista03A_EX005 - Receber um valor que represente o raio de uma circunferência (cancelar o
processamento quando o valor raio for menor ou igual a zero).
Calcular sua área utilizando a fórmula: A = pi * R2

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
    float raio, area;

    //INICIALIZAR VARIAVEIS

    raio = 0;
    area = 0;

    printf ("\n Informe o raio do circulo (maior que zero): ");
    fflush (stdin);
    scanf ("%f", &raio);

    if (raio > 0)
    {
        area = 3.1415 * pow (raio, 2);

        system ("cls");

        printf ("\n A area do circulo eh: %.2f", area);
    }

    else
    {
        printf ("\n Invalido");
    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
