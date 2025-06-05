/*===============================================================

    L05A_ex001 - Fazer os algoritmos para mostrar as sequencias numéricas abaixo ... sendo CADA
LETRA UM PROJETO.
Observação:

 O valor de N (quando solicitado) deverá ser informado via teclado e VALIDAR CORRETIVAMENTE
para não atender ao solicitado.
 O valor de N é uma referencia limite não havendo a necessidade, dependendo da sequencia dela
aparecer, ou seja, processar a sequencia enquanto for MENOR OU IGUAL ao valor de N.

VALIDAR CORRETIVAMENTE é um laço de repetição que TESTA O VALOR DE ENTRADA e caso não seja o
valor solicitado, permite que cliente (usuário) digite novamente outro valor, o qual, após a nova entrada,
retorna a abertura do LAÇO onde será testado novamente, e assim por diante.

Exemplo com a letra C:
processar e mostrar a sequencia enquanto menor ou igual a N
0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , ... , N
Para este problema o valor de N deverá ser digitado via teclado e ser maior ou igual a ZERO, caso contrário
o número é invalido e o cliente deverá digitar outro ... só executar a sequência após o valor de N ser positivo.

a) 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15


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

    int nm, col;

    //INICIALIZAR VARIAVEIS

    nm = 0;
    col = 1;

    while (nm <=14)
    {
        if (col <=5)
        {
            printf (" %5d,", nm);
            Sleep(150);
            nm++;
            col++;
        }

        else
        {
            printf ("\n");
            col = 1;
        }


    }

    if (nm == 15)
    {
        printf (" %5d", nm);
    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
