/*===============================================================

    7) Elabore um algoritmo que receba um número positivo, calcule e mostre:
a) o valor do quadrado desse número
b) o valor do cubo desse número
c) o valor da raiz quadrada desse número.

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

    float nr, quad, cub, raiz;

    //INICIALIZAR VARIAVEIS

    nr = 0;
    quad = 0;
    cub = 0;
    raiz = 0;

    printf ("\n Informe um numero positivo: ");
    fflush (stdin);
    scanf ("%f", &nr);

    while (nr <= 0)
    {
        printf ("\n Por favor, informe um numero positivo: ");
        fflush (stdin);
        scanf ("%f", &nr);
    }

    quad = pow(nr,2);

    cub = pow(nr,3);

    raiz = sqrt(nr);

    system ("cls");

    printf ("\n O quadrado do numero eh: %.2f", quad);
    printf ("\n\n O cubo do numero eh: %.2f", cub);
    printf ("\n\n A raiz do numero eh: %.2f", raiz);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
