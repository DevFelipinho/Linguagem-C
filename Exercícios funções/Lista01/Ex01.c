/*===============================================================

    Lista01_funcao_ex01 – Elabore um algoritmo em linguagem C, que receba um número
    inteiro e positivo, processar e mostrar o resultado da soma dos N’s números inteiros começando
    em 01 (um) variando de 1 em 1 até esse número N.
     Obs.:
    1) criar uma função com passagem de parâmetro por “referência”, para validar a entrada de dados
    para que o número de entrada seja positivo.
    2) Criar uma função que receba como parâmetro o “valor” de N, processar dentro desta função o
    somatório solicitado e mostrar os resultado dentro da própria função.

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1º PERÍODO - DISCIPLINA DE ALGORITMO E LÓGICA DE PROGRAMAÇÃO
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
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
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
