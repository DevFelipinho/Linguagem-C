/*===============================================================

    Lista03A_EX008 - Uma empresa tem, para um determinado funcionário, uma ficha contendo o
nome, nº de horas trabalhadas e o nº de dependentes deste funcionário.
 Considerando que:
a) A empresa paga 12,00 reais por hora e 40,00 reais por dependentes.
b) Sobre o salário são feito descontos de 8,5% para o INSS e 5% para IR.
c) Faça um algoritmo para ler o Nome, número de horas trabalhadas e número de
dependentes de um funcionário.
Obs.:
 fazer a verificações necessárias para as entradas;
 Após o processamento, escreva qual o Nome, salário bruto, os valores descontados
para INSS e para IR e o salário líquido do funcionário.

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

    char nm[100];
    float salBruto, salLiquido, vlINSS, vlIR, hora, dep;

    //INICIALIZAR VARIAVEIS

    strcpy (nm, "");
    salBruto = 0;
    salLiquido = 0;
    vlINSS = 0;
    vlIR = 0;
    hora = 0;
    dep = 0;

    printf ("\n Informe o seu nome: ");
    fflush (stdin);
    gets (nm);

    if (strcmp (nm, "") == 0)
    {
        printf ("\n Invalido");
    }

    else
    {
        printf ("\n Informe o numero de horas trabalhadas: ");
        fflush (stdin);
        scanf ("%f", &hora);

        if (hora < 0)
        {
            printf ("\n Invalido");
        }

        else
        {
            printf ("\n Informe o numero de dependentes: ");
            fflush (stdin);
            scanf ("%f", &dep);

            if (hora < 0)
            {
                printf ("\n Invalido");
            }

            else
            {

                system ("cls");

                salBruto = (12.0 * hora) + (40.0 * dep);
                vlINSS = salBruto * 0.085;
                vlIR = salBruto * 0.05;
                salLiquido = salBruto - (vlIR + vlINSS);

                printf ("\n         RELATORIO");
                printf ("\n\n Nome.............................: %s", nm);
                printf ("\n\n Salario bruto....................: %6.2f", salBruto);
                printf ("\n\n Valor descontado para INSS.......: %6.2f", vlINSS);
                printf ("\n\n Valor descontado para IR.........: %6.2f", vlIR);
                printf ("\n\n Salario liquido..................: %6.2f", salLiquido);



            }
        }
    }


    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
