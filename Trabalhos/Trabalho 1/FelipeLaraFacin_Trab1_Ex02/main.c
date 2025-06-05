/*===============================================================

    2) Em uma eleição para representante de sala da sua turma graduação existem quatro candidatos. Receber os nomes dos
    candidatos.
    Os votos são informados através de código. Os dados utilizados para a escrutinagem obedecem à seguinte codificação:
     1, 2, 3, 4 = voto para os respectivos candidatos;
     5 = voto nulo;
     6 = voto em branco;
     0 = fim da votação.
    Observação: o dado informado deve ser validado.
    Elabore um algoritmo que solicite ao operador a série de votos (cujo elemento finalizador é zero) e apresente no final os
    seguintes dados:
     total de votos para cada candidato;
     total de votos nulos;
     total de votos em branco;
     percentual dos votos em branco e nulos sobre o total geral de votantes;
     qual(is) o(s) candidato(s) vencedor(es).


    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1º PERÍODO - DISCIPLINA DE ALGORITMO E LÓGICA DE PROGRAMAÇÃO
    Nome do aluno(a):
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

    char cand1[100], cand2[100], cand3[100], cand4[100];
    float voto, quant1, quant2, quant3, quant4, quantN, quantB, quantV, porc;


    //INICIALIZAR VARIAVEIS

    strcpy (cand1, "");
    strcpy (cand2, "");
    strcpy (cand3, "");
    strcpy (cand4, "");

    voto = quant1 = quant2 = quant3 = quant4 = quantB = quantN = quantV = porc = 0;

    printf ("\n Informe o nome do primeiro candidato: ");
    fflush (stdin);
    gets (cand1);

    while (strcmp (cand1,"")==0)
    {
        printf ("\n Nenhum nome registrado, digite o nome do primeiro candidato: ");
        fflush (stdin);
        gets (cand1);
    }

    printf ("\n Informe o nome do segundo candidato: ");
    fflush (stdin);
    gets (cand2);

    while (strcmp (cand2,"")==0)
    {
        printf ("\n Nenhum nome registrado, digite o nome do segundo candidato: ");
        fflush (stdin);
        gets (cand2);
    }

    printf ("\n Informe o nome do terceiro candidato: ");
    fflush (stdin);
    gets (cand3);

    while (strcmp (cand3,"")==0)
    {
        printf ("\n Nenhum nome registrado, digite o nome do terceiro candidato: ");
        fflush (stdin);
        gets (cand3);
    }

    printf ("\n Informe o nome do quarto candidato: ");
    fflush (stdin);
    gets (cand4);

    while (strcmp (cand4,"")==0)
    {
        printf ("\n Nenhum nome registrado, digite o nome do quarto candidato: ");
        fflush (stdin);
        gets (cand4);
    }

        printf ("\n----------------------------------------------------------");
        printf ("\n 1, 2, 3, 4 = voto para os respectivos candidatos");
        printf ("\n 5 = voto nulo");
        printf ("\n 6 = voto em branco");
        printf ("\n 0 = fim da votacao.");
        printf ("\n----------------------------------------------------------");
        printf ("\n Informe a serie de votos: \n");

    do
    {
        printf ("\n ");
        fflush(stdin);
        scanf("%f", &voto);

        while (voto != 0 && voto != 1 && voto != 2 && voto != 3 && voto != 4 && voto != 5 && voto != 6)
        {
            printf ("\n Voto invalido, digite novamente: ");
            fflush(stdin);
            scanf("%f", &voto);
        }

        if (voto!=0)
        {
            if (voto == 1)
            {
                quant1++;
                quantV++;
            }

            else if (voto == 2)
            {
                quant2++;
                quantV++;
            }

            else if (voto == 3)
            {
                quant3++;
                quantV++;
            }

            else if (voto == 4)
            {
                quant4++;
                quantV++;
            }

            else if (voto == 5)
            {
                quantN++;
                quantV++;
            }

            else if (voto == 6)
            {
                quantB++;
                quantV++;
            }

            porc = ((quantB + quantN) / quantV) * 100;

        }

    }while (voto!=0);

    system ("cls");

    if (quantV == 0)
    {
        printf ("\n Nao teve votos");
    }

    else
    {
        printf ("\n Total de votos para %s: %.0f", cand1, quant1);
        printf ("\n Total de votos para %s: %.0f", cand2, quant2);
        printf ("\n Total de votos para %s: %.0f", cand3, quant3);
        printf ("\n Total de votos para %s: %.0f", cand4, quant4);
        printf ("\n Total de votos nulos: %.0f",quantN);
        printf ("\n Total de votos em branco: %.0f",quantB);
        printf ("\n Percentual dos votos em branco e nulos sobre o total geral de votantes: %.2f%%",porc);


        if (quant1 > quant2 && quant1 > quant3 && quant1 > quant4)
        {
            printf ("\n O candidato vencedor eh: %s", cand1);
        }

        else if (quant2 > quant1 && quant2 > quant3 && quant2 > quant4)
        {
            printf ("\n O candidato vencedor eh: %s", cand2);
        }

        else if (quant3 > quant2 && quant3 > quant1 && quant3 > quant4)
        {
            printf ("\n O candidato vencedor eh: %s", cand3);
        }

        else if (quant4 > quant2 && quant4 > quant3 && quant4 > quant1)
        {
            printf ("\n O candidato vencedor eh: %s", cand4);
        }

        else if (quant1 == quant2 && quant1 > quant3 && quant1 > quant4)
        {
            printf ("\n Os candidatos vencedores sao: %s e %s", cand1, cand2);
        }

        else if (quant1 == quant3 && quant1 > quant2 && quant1 > quant4)
        {
            printf ("\n Os candidatos vencedores sao: %s e %s", cand1, cand3);
        }

        else if (quant1 == quant4 && quant1 > quant3 && quant1 > quant2)
        {
            printf ("\n Os candidatos vencedores sao: %s e %s", cand1, cand4);
        }

        else if (quant2 == quant3 && quant2 > quant1 && quant2 > quant4)
        {
            printf ("\n Os candidatos vencedores sao: %s e %s", cand2, cand3);
        }

        else if (quant2 == quant4 && quant2 > quant1 && quant2 > quant3)
        {
            printf ("\n Os candidatos vencedores sao: %s e %s", cand2, cand4);
        }

        else if (quant3 == quant4 && quant3 > quant1 && quant3 > quant2)
        {
            printf ("\n Os candidatos vencedores sao: %s e %s", cand3, cand4);
        }

        else if (quant1 == quant2 && quant1 == quant3 && quant1 > quant4)
        {
            printf ("\n Os candidatos vencedores sao: %s, %s e %s ", cand1, cand2, cand3);
        }

        else if (quant1 == quant2 && quant1 == quant4 && quant1 > quant3)
        {
            printf ("\n Os candidatos vencedores sao: %s, %s e %s ", cand1, cand2, cand4);
        }

        else if (quant1 == quant3 && quant1 == quant4 && quant1 > quant2)
        {
            printf ("\n Os candidatos vencedores sao: %s, %s e %s ", cand1, cand3, cand4);
        }

        else if (quant4 == quant2 && quant4 == quant3 && quant4 > quant1)
        {
            printf ("\n Os candidatos vencedores sao: %s, %s e %s ", cand4, cand2, cand3);
        }

        else if (quant1 == quant2 && quant1 == quant4 && quant1 == quant3)
        {
            printf ("\n Os candidatos vencedores sao: %s, %s, %s e %s ", cand1, cand2, cand3, cand4);
        }
    }

    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
