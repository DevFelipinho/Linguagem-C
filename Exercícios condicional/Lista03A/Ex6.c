/*===============================================================

    Lista03A_EX006 - Receber o sexo e altura de uma pessoa, sendo << m>> para o sexo masculino
ou << f >> para o sexo feminino, caso inválido finalizar o programa, senão fazer o cálculo do
peso ideal através da fórmula:
 Para sexo masculino: peso = (72.7 * alt) – 58
 para o sexo feminino: peso = (62.1 * alt) – 44.77

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

    char sex[100];
    float alt, pes;

    //INICIALIZAR VARIAVEIS

    strcpy (sex, "");
    alt = 0;
    pes = 0;

    printf ("\n Informe o seu sexo (m para masculino e f para feminino): ");
    fflush (stdin);
    gets (sex);

    if (strcmp (sex, "m") == 0)
    {
        printf ("\n Informe a sua altura: ");
        fflush (stdin);
        scanf ("%f", &alt);

        pes = (72.7 * alt) - 58.0;

        system ("cls");

        printf ("\n O peso ideal para a sua altura eh: %.2f", pes);

    }

    else if (strcmp (sex, "f") == 0)
    {
        printf ("\n Informe a sua altura: ");
        fflush (stdin);
        scanf ("%f", &alt);

        pes = (62.1 * alt) - 44.77;

        system ("cls");

        printf ("\n O peso ideal para a sua altura eh: %.2f", pes);
    }

    else
    {
        printf ("\n Invalido.");
    }



    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
