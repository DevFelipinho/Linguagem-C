/*===============================================================

    L04_ex02 – Elaborar um algoritmo que receba o salário base de um determinado funcionário e de acordo com as tabelas
abaixo, calcule as gratificações e deduções cabíveis a este funcionário. Ao final mostre:
a) O valor do salário base;
b) O valor das gratificações;
c) O valor das deduções e
d) o valor liquido a a receber.

Salário base            Gratificação           Salário base                Deduções
até 300,00              R$ 100,00              até R$ 200,00               Isento
de 301,00 até 500,00    R$ 75,00               de R$ 201,00 a R$ 500,00    3%
de 501,00 até 1.000,00  R$ 50,00               de R$ 501,00 a R$ 700,00    5%
acima de 1.000,00       R$ 30,00               de R$ 701,00 a R$ 1.000,00  8%
                                               acima de 1.000,00           10%
 Fazer as verificações necessárias para os dados de entrada (se salário menor que zero mostrar mensagem de valor
inválido; se igual à zero mostrar que não houve salário nesse mês);

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

    float salBase, vlGrat, vlDedu, vlLiquido;

    //INICIALIZAR VARIAVEIS

    salBase = 0;
    vlGrat = 0;
    vlDedu = 0;
    vlLiquido = 0;

    printf ("\n Informe o salario base: ");
    fflush (stdin);
    scanf ("%f", &salBase);

    if (salBase < 0)
        printf ("\n Valor invalido.");

    else if (salBase == 0)
        printf ("\n Nao houve salario esse mes");

    else
    {
        if (salBase <= 200)
        {
            vlGrat = 100.0;
            vlDedu = 0.0;
            vlLiquido = salBase + (vlGrat - vlDedu);
        }

        else if ((salBase > 200) && (salBase <= 300))
        {
            vlGrat = 100.0;
            vlDedu = salBase * 0.03;
            vlLiquido = salBase + (vlGrat - vlDedu);
        }

        else if ((salBase > 300) && (salBase <= 500))
        {
            vlGrat = 75.0;
            vlDedu = salBase * 0.03;
            vlLiquido = salBase + (vlGrat - vlDedu);
        }

        else if ((salBase > 500) && (salBase <= 700))
        {
            vlGrat = 50.0;
            vlDedu = salBase * 0.05;
            vlLiquido = salBase + (vlGrat - vlDedu);
        }

        else if ((salBase > 700) && (salBase <= 1000))
        {
            vlGrat = 50.0;
            vlDedu = salBase * 0.08;
            vlLiquido = salBase + (vlGrat - vlDedu);
        }

        else if (salBase > 1000)
        {
            vlGrat = 30.0;
            vlDedu = salBase * 0.1;
            vlLiquido = salBase + (vlGrat - vlDedu);
        }

        system ("cls");

        printf ("\n                 Relatorio");
        printf ("\n\n Valor do salario base.............: %7.2f", salBase);
        printf ("\n\n Valor das gratificacoes...........: %7.2f", vlGrat);
        printf ("\n\n Valor das deducoes................: %7.2f", vlDedu);
        printf ("\n\n Valor do salario liquido a receber: %7.2f", vlLiquido);

    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
