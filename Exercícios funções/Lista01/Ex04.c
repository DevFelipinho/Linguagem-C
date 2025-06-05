/*===============================================================

    Lista01_funcao_ex04 � Fa�a um algoritmo em linguagem C, que receba um valor maior ou igual a
    zero, processar e mostrar o fatorial desse n�mero.
     Obs.1:
    1) criar uma fun��o de entrada do tipo �float�, para receber um n�mero;
    2) criar uma fun��o para receber como passagem de par�metro por �refer�ncia� o valor da entrada
    e validar corretivamente para que esse n�mero seja maior ou igual a zero;
    3) criar uma fun��o do tipo �void� que ir� receber como par�metro, o �valor� de entrada, processar e
    o fatorial desse n�mero, mostrando o resultado dentro da desta fun��o.
    Obs.2: sabe-se que o fatorial de 0 � igual a 1 e n�o existe fatorial de n�mero negativo.

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1� PER�ODO - DISCIPLINA DE ALGORITMO E L�GICA DE PROGRAMA��O
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

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================
float receber (float valor);
void validar (float *valor);
void fatorial (float *valor);






//===============================================================
//============== LOCAL PARA CRIAR OS M�DULOS DE FUN��ES =========
//===============================================================
float receber (float valor)
{
    printf ("\n Informe um valor(maior ou igual a zero): ");
    fflush (stdin);
    scanf ("%f", &valor);

    return (valor);
}
//===============================================================
void validar (float *valor)
{
    while (*valor<0)
    {
        printf ("\n Valor invalido, digite novamente: ");
        fflush (stdin);
        scanf ("%f", &*valor);
    }

    fatorial(&*valor);
}
//===============================================================
void fatorial (float *valor)
{
    float res, cont;

    cont = res = 1;

    for (;cont<=*valor; cont++)
    {
        res*=cont;
    }

    printf ("\n O fatorial do valor eh: %.2f", res);
}
//===============================================================

//===============================================================

//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //CRIAR VARIAVEIS

    float valor;

    //INICIALIZAR VARIAVEIS

    valor = 0.0;

    valor = receber(valor);
    validar(&valor);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
