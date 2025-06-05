/*===============================================================

    Lista02_Ex02.alg � Elaborar um algoritmo que receba o Nome e ano nascimento de uma
pessoa.
 Fazer as verifica��es em cada entrada e se n�o atender a condi��o desejada para
c�lculo dar uma mensagem de �inv�lido� e finalizar o algoritmo, caso contr�rio,
processar e mostrar o nome e sua idade.
Obs.:
a) Nome da pessoa n�o pode ser �vazio�;
b) Ano tem que ser maior ou igual 1900 e menor ou igual ao ano atual;
Considerar que a pessoa j� fez anivers�rio este ano.

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

    char nm [100], vaz[2];
    int ano, ida;

    //INICIALIZAR VARIAVEIS

    strcpy (nm, "");
    strcpy (vaz, "");
    ano = 0;
    ida = 0;

    printf ("\n Informe o seu nome: ");
    fflush (stdin);
    gets (nm);

    printf ("\n\n Informe seu ano de nascimento: ");
    fflush (stdin);
    scanf ("%d", &ano);

    system ("cls");

    if ((strcmp(nm, "") != 0) && (ano >= 1900) && (ano <= 2025))
    {
        ida = 2025 - ano;

        printf ("\n Nome: %s", nm);
        printf ("\n\n Idade = %d", ida);
    }

    else
    {
        printf ("\n Invalido.");
    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
