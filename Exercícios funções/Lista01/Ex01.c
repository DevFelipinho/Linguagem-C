/*===============================================================

    Lista01_funcao_ex01 � Elabore um algoritmo em linguagem C, que receba um n�mero
    inteiro e positivo, processar e mostrar o resultado da soma dos N�s n�meros inteiros come�ando
    em 01 (um) variando de 1 em 1 at� esse n�mero N.
     Obs.:
    1) criar uma fun��o com passagem de par�metro por �refer�ncia�, para validar a entrada de dados
    para que o n�mero de entrada seja positivo.
    2) Criar uma fun��o que receba como par�metro o �valor� de N, processar dentro desta fun��o o
    somat�rio solicitado e mostrar os resultado dentro da pr�pria fun��o.

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
void validar(float *num);
int somatoria(int num);




//===============================================================
//============== LOCAL PARA CRIAR OS M�DULOS DE FUN��ES =========
//===============================================================
void validar(float *num)
{
    int aux;

    do
    {

        fflush (stdin);
        scanf ("%f", &*num);

        aux = *num;

        if (*num<=0 || aux!=*num)
        {
            printf ("\n Numero invalido, digite novamente: ");
        }

    }while (*num<=0 || aux!=*num);
}
//===============================================================
int somatoria(int num)
{
    int som, soma;

    som = 1;
    soma = 0;

    do
    {
        soma+=som;
        som++;

    }while (som<=num);

    return (soma);
}
//===============================================================

//===============================================================

//===============================================================

//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //CRIAR VARIAVEIS

    float num_li;
    int soma;

    //INICIALIZAR VARIAVEIS

    num_li = 0.0;
    soma = 0;

    printf ("\n Informe um numero inteiro e positivo: ");

    validar(&num_li);

    soma =somatoria(num_li);

    printf ("\n O resultado da soma eh: %d", soma);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
