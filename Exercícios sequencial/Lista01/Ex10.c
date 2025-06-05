/*===============================================================

    L01_010.alg - Sejam os seguintes dados de um funcionário: nome, idade, cargo e o seu salário bruto. Considere:
a) o salário bruto teve um reajuste de 20%;
b) o salário bruto total (salário bruto + 20%) é descontado 15% para se obter o salário líquido.
Elabore um algoritmo que solicite os dados do funcionário processe e mostre no vídeo:
 o nome, a idade e o cargo;
 o salário bruto total;
 o salário líquido.

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

    char nm[100], carg[100];
    float salBruto, salBrutoTotal, salLiquido;
    int ida;

    //INICIALIZAR VARIAVEIS

    salBruto = 0;
    salBrutoTotal = 0;
    salLiquido = 0;
    ida = 0;
    strcpy (nm, "");
    strcpy (carg, "");

    printf ("\n Informe o nome do(a) funcionario(a): ");
    fflush (stdin);
    gets (nm);

    printf ("\n Informe a idade do(a) funcionario(a): ");
    fflush (stdin);
    scanf ("%d", &ida);

    printf ("\n Informe o cargo do(a) funcionario(a): ");
    fflush (stdin);
    gets (carg);

    printf ("\n Informe o salario bruto do(a) funcionario(a): ");
    fflush (stdin);
    scanf ("%f", &salBruto);

    salBrutoTotal = salBruto + (salBruto * 0.2);
    salLiquido = salBrutoTotal - (salBrutoTotal * 0.15);

    system ("cls");

    printf ("\n Nome do(a) funcionario(a): %s", nm);
    printf ("\n\n Idade do(a) funcionario(a): %d", ida);
    printf ("\n\n Cargo do(a) funcionario(a): %s", carg);
    printf ("\n\n Salario bruto total: %.2f", salBrutoTotal);
    printf ("\n\n Salario liquido: %.2f", salLiquido);

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
