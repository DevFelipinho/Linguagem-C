/*===============================================================

    L01_007.alg - Elabore um algoritmo que receba o nome de duas pessoas e mostre no vídeo a união
(concatenação) destes dois nomes.
Ex.: nome1 <- “MARIA”
 nome2 <- “JOÃO” mostrar: MARIA E JOÃO

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
