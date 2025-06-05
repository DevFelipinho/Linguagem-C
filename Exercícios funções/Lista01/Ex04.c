/*===============================================================

    Lista01_funcao_ex04 – Faça um algoritmo em linguagem C, que receba um valor maior ou igual a
    zero, processar e mostrar o fatorial desse número.
     Obs.1:
    1) criar uma função de entrada do tipo “float”, para receber um número;
    2) criar uma função para receber como passagem de parâmetro por “referência” o valor da entrada
    e validar corretivamente para que esse número seja maior ou igual a zero;
    3) criar uma função do tipo “void” que irá receber como parâmetro, o “valor” de entrada, processar e
    o fatorial desse número, mostrando o resultado dentro da desta função.
    Obs.2: sabe-se que o fatorial de 0 é igual a 1 e não existe fatorial de número negativo.

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
float receber (float valor);
void validar (float *valor);
void fatorial (float *valor);






//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
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
