
/*===============================================================

   L01_001.alg - Elabore um algoritmo que solicite ao operador as seguintes informações de uma pessoa: nome,
idade, sexo, altura, profissão, rua, bairro, cidade, estado, CEP.
Mostre no vídeo o seguinte relatório:
 ===============================================================
 JOAO DA SILVA, voce tem 20 anos, sexo MASCULINO
 tem 1.85 metros de altura
 sua profissao eh PROFESSOR
 mora no endereco: AV. SAUDADE, 777
 bairro CENTRO - CEP: 38.100-000 - UBERABA (MG)
 ===============================================================


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

    char nm[100], sex[100], pro[100], rua[100], bai[100], cid[100], est[100], cep[100];
    int ida;
    float alt;


    //INICIALIZAR VARIAVEIS

    ida = 0;
    alt = 0;
    strcpy (nm, "");
    strcpy (sex, "");
    strcpy (pro, "");
    strcpy (rua, "");
    strcpy (bai, "");
    strcpy (cid, "");
    strcpy (est, "");
    strcpy (cep, "");

    printf ("\n Informe o seu nome: ");
    fflush (stdin);
    gets (nm);

    printf ("\n Informe a sua idade: ");
    fflush (stdin);
    scanf ("%d", &ida);

    printf ("\n Informe o seu sexo (masculino ou feminino): ");
    fflush (stdin);
    scanf ("%s", &sex);

    printf ("\n Informe a sua altura em metros: ");
    fflush (stdin);
    scanf ("%f", &alt);

    printf ("\n Informe a sua profissao: ");
    fflush (stdin);
    scanf ("%s", &pro);

    printf ("\n Informe a sua rua com o numero da casa: ");
    fflush (stdin);
    scanf ("%s", &rua);

    printf ("\n Informe o seu bairro: ");
    fflush (stdin);
    scanf ("%s", &bai);

    printf ("\n Informe a sua cidade: ");
    fflush (stdin);
    scanf ("%s", &cid);

    printf ("\n Informe a sigla do seu estado: ");
    fflush (stdin);
    scanf ("%s", &est);

    printf ("\n Informe o seu CEP (com separadores): ");
    fflush (stdin);
    scanf ("%s", &cep);

    system ("cls");


    printf ("\n\n\n\n                        RELATORIO");
    printf ("\n ===============================================================");
    printf ("\n %s, voce tem %d anos, sexo %s", nm, ida, sex);
    printf ("\n tem %.2f metros de altura", alt);
    printf ("\n sua profissao eh %s", pro);
    printf ("\n mora no endereco: %s", rua);
    printf ("\n bairro %s - CEP: %s - %s (%s)", bai, cep, cid, est);
    printf ("\n ===============================================================");





    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
