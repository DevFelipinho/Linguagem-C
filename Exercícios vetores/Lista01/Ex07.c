/*===============================================================

    Lista01_vetor_ex07 – Elabore um algoritmo que receba os nomes e as notas de 50 alunos, ou seja: n1, n2, n3 e
n4 (um vetor de 50 posições para cada uma das notas e um vetor para o nome). Validar
corretivamente as notas para estarem entre 0 e 10 pontos. Criar um vetor chamado MD para
armazenar a média aritmética de cada aluno.
 No Final, limpar a tela e mostrar o nome do aluno e sua média aritmética.
 Mostrar também, qual a maior média e o nome(s) do(s) aluno(s).

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

#define tam 5

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================
void validar(float *x);





//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================
void validar(float *x)
{
    while (*x < 0.0 || *x > 10.0)
    {
        printf ("\n Nota invalida, digite novamente: ");
        fflush (stdin);
        scanf ("%f", &*x);
    }
}
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

    char nome[tam][100], nomem[100], nomemax[tam][100];
    float n1[tam], n2[tam], n3[tam], n4[tam], md[tam], ma, max[tam];
    int i, maxcont;


    //INICIALIZAR VARIAVEIS

    ma = 0;
    strcpy(nomem, "");

    for(i = 0; i<tam; i++)
    {
        strcpy(nome[i], "");
        strcpy(nomemax[i], "");
        n1[i] = 0;
        n2[i] = 0;
        n3[i] = 0;
        n4[i] = 0;
        md[i] = 0;
        max[i] = 0;
        maxcont = 0;
    }

    for(i = 0; i<tam; i++)
    {
        printf ("\n Informe o nome do aluno %d.........: ", i+1);
        fflush (stdin);
        gets(nome[i]);

        printf ("\n Informe a primeira nota do aluno %d: ", i+1);
        fflush (stdin);
        scanf ("%f", &n1[i]);

        validar(&n1[i]);

        printf ("\n Informe a segunda nota do aluno %d.: ", i+1);
        fflush (stdin);
        scanf ("%f", &n2[i]);

        validar(&n2[i]);

        printf ("\n Informe a terceira nota do aluno %d: ", i+1);
        fflush (stdin);
        scanf ("%f", &n3[i]);

        validar(&n3[i]);

        printf ("\n Informe a quarta nota do aluno %d..: ", i+1);
        fflush (stdin);
        scanf ("%f", &n4[i]);

        validar(&n4[i]);

        md[i] = (n1[i] + n2[i] + n3[i] + n4[i])/4;

        if (md[i]> ma)
        {
            ma = md[i];
            strcpy(nomem, nome[i]);
        }

    }

    for(i = 0;i<tam;i++)
    {
        if (md[i]== ma)
        {
            max[i] = md[i];
            strcpy(nomemax[i], nome[i]);
            maxcont++;
        }

    }

    system ("cls");

    for(i = 0; i<tam; i++)
        printf ("\n Media do aluno %s: %.2f", nome[i], md[i]);

    if (maxcont>1)
    {
        printf ("\n As maiores notas foram dos alunos ");
        for(i = 0; i<tam; i++)
        {
            if(max[i] != 0)
            {
               printf("%s ",nomemax[i]);
            }
        }

        printf (": %.2f", ma);
    }

    if(maxcont == 1)
    {
        for(i = 0; i<tam; i++)
        {
            if(max[i] != 0)
            {
               printf("\n\n\n A maior media foi do aluno %s: %.2f",nomemax[i], max[i]);
            }
        }
    }





    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
