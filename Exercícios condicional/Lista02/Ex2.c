/*===============================================================

    Lista02_Ex02.alg – Elaborar um algoritmo que receba o Nome e ano nascimento de uma
pessoa.
 Fazer as verificações em cada entrada e se não atender a condição desejada para
cálculo dar uma mensagem de “inválido” e finalizar o algoritmo, caso contrário,
processar e mostrar o nome e sua idade.
Obs.:
a) Nome da pessoa não pode ser “vazio”;
b) Ano tem que ser maior ou igual 1900 e menor ou igual ao ano atual;
Considerar que a pessoa já fez aniversário este ano.

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
