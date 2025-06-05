/*===============================================================

    Lista03A_EX003 - Receber dois números, processar e verificar, mostrando uma mensagem de qual
deles é o maior ou se são iguais, mostrando seu valor no vídeo.

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

    float nr1, nr2;

    //INICIALIZAR VARIAVEIS

    nr1 = 0;
    nr2 = 0;

    printf ("\n Informe o primeiro numero: ");
    fflush (stdin);
    scanf ("%f", &nr1);

    printf ("\n Informe o segundo numero: ");
    fflush (stdin);
    scanf ("%f", &nr2);

    if (nr1 > nr2)
    {

        system ("cls");
        printf ("\n O primeiro numero (%.2f) eh maior que o segundo numero (%.2f)", nr1, nr2);
    }

    if (nr1 < nr2)
    {
        system ("cls");
        printf ("\n O segundo numero (%.2f) eh maior que o primeiro numero (%.2f)", nr2, nr1);
    }
    if (nr1 == nr2)
    {
        system ("cls");
        printf ("\n Os numeros sao iguais, %.2f = %.2f", nr1, nr2);
    }


    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
