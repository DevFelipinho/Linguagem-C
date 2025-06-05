/*===============================================================

    Lista02_vetor_ex08 – Elabore um algoritmo para criar 2 vetores de 50 posições cada. Um irá receber nome e o
outro a idade (validar a idade maior ou igual a zero).
 Processar e mostrar o(s) nome(s) da(s) pessoa(s) que tem maior idade.

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1º PERÍODO - DISCIPLINA DE ALGORITMO E LÓGICA DE PROGRAMAÇÃO
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

#define tam 5

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

    int ida[tam], i, max;
    char nm[tam][100];

    //INICIALIZAR VARIAVEIS

    for (i = 0; i<tam; i++)
    {
        strcpy(nm[i], "");
        ida[i] = 0;
    }

    for (i = 0; i<tam; i++)
    {
        printf ("\n Informe o nome: ");
        fflush (stdin);
        gets(nm[i]);

        printf ("\n Informe a idade da pessoa: ");

        do
        {
            fflush (stdin);
            scanf ("%d", &ida[i]);

            if (ida[i] < 0)
                printf("\n Idade invalida, digite novamente: ");

        }while (ida[i]<0);

        if(i==0)
            max = ida[i];

        else if (max<ida[i])
            max = ida[i];
    }

    for (i = 0; i<tam; i++)
    {
        if(max == ida[i])
        {
            printf ("\n %s", nm[i]);
        }
    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
