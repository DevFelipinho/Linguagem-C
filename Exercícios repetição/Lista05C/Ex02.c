/*===============================================================

    L05C _ex02 – Elabore um algoritmo que solicite ao usuário um número inteiro e positivo, validar corretivamente a
    entrada para que esse número seja positivo, processe e apresente o resultado de seu fatorial.
    Sabendo que matematicamente, o fatorial de um número é representado pelo símbolo de
    exclamação, veja: 5!
    O 5! (cinco fatorial) equivale a multiplicação de todos os termos, começando de 1 até ele mesmo:
    1 * 2 * 3 * 4 * 5 = 120
    Por definição matemática, o fatorial de 0 (zero) é igual a 1 (um).
    Obs.1: Validação corretiva é um processo que usamos para receber a informação e durante esta
    entrada já verificar é verdadeira, ou seja, enquanto for falsa estará dentro laço de repetição até que
    o usuário digite o valor correto. Veja o exemplo deste algoritmo.

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1º PERÍODO - DISCIPLINA DE ALGORITMO E LÓGICA DE PROGRAMAÇÃO
    Nome do aluno(a): Felipe Lara Facin
    1 SEMESTRE 2025
    Prof. Ernani Claudio Borges
    data: Abril 2025

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

    int quant, fat, cont, cont2;

    //INICIALIZAR VARIAVEIS

    cont = 0;
    fat = 1;
    quant = 0;
    cont2 = 1;

    printf ("\n Informe um numero inteiro e positivo: ");

    do
    {
        fflush (stdin);
        scanf ("%d", &quant);

        if (quant<=0)
        {
            printf ("\n Numero invalido, digite novamente: ");
        }
    }while (quant<=0);

    do
    {
        fat = fat * cont2;
        cont++;
        cont2++;

    }while (cont<quant);

    printf ("\n O fatorial desse numero eh: %d", fat);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
