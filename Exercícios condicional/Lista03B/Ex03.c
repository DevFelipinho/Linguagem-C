/*===============================================================

    Lista03B_ex03 - Elaborar um algoritmo que receba o nome e o sexo de uma pessoa. Verificar o nome para n�o ser
vazio, caso n�o seja, receber o sexo e verificar se � diferente << m >> para masculino e << f >> para
feminino, se for diferente dar mensagem de sexo invalido e finalizar o algoritmo.
Logo a seguir, caso o sexo seja v�lido, mostrar no v�deo �Ilmo Sr. fulano� para o sexo masculino e �Ilma Sra.
fulana� para o sexo feminino.


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

    char nm[100], sex[100];

    //INICIALIZAR VARIAVEIS

    strcpy (nm, "");
    strcpy (sex, "");

    printf ("\n Informe o seu nome: ");
    fflush (stdin);
    gets (nm);

    if (strcmp (nm, "") == 0)
    {
        printf ("\n Nome invalido.");
    }

    else
    {
        printf ("\n Informe o seu sexo(m para masculino e f para feminino): ");
        fflush (stdin);
        gets (sex);

        if (strcmp (sex, "m") == 0 )
        {
            system ("cls");

            printf ("\n Ilmo Sr. %s", nm);


        }

        else if (strcmp (sex, "f") == 0 )
        {
            system ("cls");

            printf ("\n Ilma Sra. %s", nm);
        }

        else
        {
            printf ("\n Sexo invalido.");
        }
    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
