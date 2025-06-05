/*===============================================================

    Lista01_funcao_ex03 – Faça um programa em linguagem C, que receba um valor para representar o
    raio de uma esfera, calcular e mostrar o valor de seu volume, conforme a fórmula do volume:
    v = (4 π R3
     ) / 3
     Obs.:
    1) criar uma função com passagem de parâmetro por “referência” para receber o valor do raio;
    2) criar uma função com passagem de parâmetro por “valor” para validar a entrada (o valor do raio)
    para ser maior que zero;
    3) criar uma função do tipo VOID para calcular o valor do volume, e mostrar seu resultado DENTRO
    DESTA FUNÇÃO.

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
void receber(float *raio);
float validar(float raio);
void volume(float *r);




//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================
void receber(float *raio)
{
    printf ("\n Informe o valor do raio (maior que zero): ");
    fflush (stdin);
    scanf ("%f", &*raio);

    *raio = validar(*raio);
    volume(&*raio);
}
//===============================================================
float validar(float raio)
{
    while (raio<=0)
    {
        printf("\n Valor invalido, digite novamente: ");
        fflush (stdin);
        scanf ("%f", &raio);
    }

    return (raio);
}
//===============================================================
void volume(float *r)
{
    float volume;

    volume = 0.0;

    volume = (4 * 3.1415* pow(*r,3)/3);

    printf ("\n O valor do volume eh: %.2f", volume);
}
//===============================================================

//===============================================================

//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //CRIAR VARIAVEIS

    float raio;

    //INICIALIZAR VARIAVEIS

    raio = 0.0;

    receber(&raio);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
