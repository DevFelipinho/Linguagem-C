/*===============================================================

    Lista02_Ex01.alg � Elaborar um algoritmo que receba um n�mero positivo via teclado,
Verificar se ele � maior que zero, caso verdadeiro, processar o c�lculo do cubo desse
n�mero e mostrar o resultado, caso contr�rio d� uma mensagem de n�mero inv�lido.


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

    float nrp, cub;

    //INICIALIZAR VARIAVEIS

    nrp = 0;
    cub = 0;

    printf ("\n Informe um numero positivo: ");
    fflush (stdin);
    scanf ("%f", &nrp);

    system ("cls");

    if (nrp <= 0)
    {
        printf ("\n Numero invalido.");
    }

    if (nrp > 0)
    {

        cub = pow (nrp,3);
        printf ("\n O cubo desse numero eh: %.2f", cub);
    }
    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
