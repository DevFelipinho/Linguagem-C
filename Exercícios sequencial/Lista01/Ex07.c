/*===============================================================

    L01_007.alg - Elabore um algoritmo que receba o nome de duas pessoas e mostre no v�deo a uni�o
(concatena��o) destes dois nomes.
Ex.: nome1 <- �MARIA�
 nome2 <- �JO�O� mostrar: MARIA E JO�O

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

    char nm1[100], nm2[100], nmj[200];

    //INICIALIZAR VARIAVEIS

    strcpy (nm1, "");
    strcpy (nm2, "");
    strcpy (nmj, "");

    printf ("\n Informe o primeiro nome: ");
    fflush (stdin);
    gets (nm1);

    printf ("\n Informe o segundo nome: ");
    fflush (stdin);
    gets (nm2);

    strcat (nmj, nm1);
    strcat (nmj, " e ");
    strcat (nmj, nm2);

    system ("cls");

    printf ("\n A concatenacao dos dois nomes eh: %s", nmj);



    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
