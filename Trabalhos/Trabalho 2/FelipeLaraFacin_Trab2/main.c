/*===============================================================

        MENU DE OPCOES
    =================
     1 – maior sequencia de numeros iguais consecutivos
     2 – maior diferenca entre dois numeros consecutivos
     3 – sair
     Escolha o número de uma das opções acima...:
    1) Escreva um algoritmo que crie um vetor de 300 posições. Receber números vários números inteiros que esteja no
    intervalo de 1 a 9 (validar corretivamente) finalizar a entrada no vetor quando for digitado 0 (zero), o qual não fará parte
    do processo de escrutinagem e amostragem.
    Processar e mostrar:
    a) O vetor em sua forma de entrada;
     caso tenha recebido mais que 5 posições, mostrá-lo em colunas de 5 números por linha.
    b) mostrar a maior sequencia consecutiva de números iguais que compõe a sequencia de número no vetor.
    Por exemplo: caso seja informado 10 números conforme a sequência abaixo:
    5, 2, 2, 4, 4, 4, 4, 1, 1, 3.
    Para o exemplo de entrada acima, o Algoritmo deverá mostrar como saída os quatro número que compõem a maior
    sequencia de números iguais consecutivos, ou seja: 4, 4, 4, 4
    Observações:
    a) Criar pelo menos duas funções.
    b) Usar somente um vetor.
    c) Mostrar somente as posições que tiveram entradas via teclado.
    d) Dar uma mensagem caso não tenha sequencia de números iguais consecutivos
    2) Dado um vetor V do tipo inteiro, de dimensão igual 50. Processar e calcular a maior diferença entre dois elementos
    consecutivos de X, e mostrar quem são e quais suas posições.
    Observações:
    a) Mostrar o vetor em sua forma de entrada;
     caso tenha recebido mais que 5 posições, mostrá-lo em colunas de 5 números por linha.
    b) Criar pelo menos duas funções;
    c) Usar somente um vetor;
    d) Mostrar somente as posições que tiveram entradas via teclado;
    e) Validar corretivamente durante a entrada para ter somente números maior que zero e não ter número repetido dentro do
    vetor.
    Vetor A 30 8 24 36 45 9 7 3 29 31 ...
    índice 0 1 2 3 4 5 6 7 8 9 ...

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

#define tam 300
#define tam2 50

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================
float opcao_menu(float opcao);
float entrada (float x);
float validar_menu (float x);
float validar (float x, float opcao);
void maior_sequencia (int *contador, float vetor[]);
void amostragem_vetor(int *contador, float vetor[]);
void repetido (int *i, float vetor2[], int *contador);
void maior_diferenca (int *contador, float vetor2[]);


//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================
float opcao_menu(float opcao)
{
    printf ("\n           ==================");
    printf ("\n             MENU DE OPCOES");
    printf ("\n           ==================\n");
    printf ("\n 1 - Maior sequencia de numeros iguais consecutivos");
    printf ("\n 2 - Maior diferenca entre dois numeros consecutivos");
    printf ("\n 3 - Sair\n");
    printf ("\n Escolha o numero de uma das opcoes acima..........: ");
    opcao = entrada(opcao);
    opcao = validar_menu(opcao);

    return(opcao);
}
//===============================================================
float entrada (float x)
{
    fflush(stdin);
    scanf ("%f", &x);

    return(x);
}
//===============================================================
float validar_menu (float x)
{
    while (x != 1 && x != 2 && x != 3)
    {
        printf ("\n Opcao invalida, apenas 1, 2 ou 3. Digite novamente: ");
        x = entrada(x);
    }

    return(x);
}
//===============================================================
float validar (float x, float opcao)
{
    int xi;

    xi = 0;

    if (opcao == 1)
    {
        while (x < 0 || x > 9 || x != xi)
        {
            xi = x;

            if (x < 0 || x > 9)
            {
                printf("\n Numero invalido, precisa estar entre 1 e 9. Digite novamente: ");
                x = entrada(x);
            }

            else if (x != xi)
            {
                printf ("\n Numero invalido, precisa ser inteiro. Digite novamente: ");
                x = entrada(x);
            }
        }
    }

    else if (opcao == 2)
    {
        while (x < 0 || x != xi)
        {
            xi = x;

            if (x < 0)
            {
                printf("\n Numero invalido, precisa ser maior que zero. Digite novamente: ");
                x = entrada(x);
            }

            else if (x != xi)
            {
                printf ("\n Numero invalido, precisa ser inteiro. Digite novamente: ");
                x = entrada(x);
            }
        }
    }

    return (x);
}
//===============================================================
void maior_sequencia (int *contador, float vetor[])
{
    int sequencia, sequencia_max, numero_max, i;

    sequencia = sequencia_max = numero_max = 0;

    for(i=0;i<*contador-1;i++)
    {
        if (vetor[i+1] == vetor[i])
            sequencia++;

        else
            sequencia = 0;

        if (sequencia_max <= sequencia)
        {
            sequencia_max = sequencia;
            numero_max = vetor[i];
        }
    }

    for(i=0;i<sequencia_max;i++)
        printf (" %d,", numero_max);

    if (sequencia_max != 0)
        printf (" %d.", numero_max);

    else
        printf (" Nao teve sequencia de numeros iguais consecutivos.");
}
//===============================================================
void amostragem_vetor(int *contador, float vetor[])
{
    int cont, i;

    cont = i = 0;

    printf ("\n                 AMOSTRAGEM DO VETOR EM FORMA DE ENTRADA");
    printf ("\n               ===========================================\n\n");

    for(i=0;i<*contador-1;i++)
    {
        printf ("          %-3.0f", vetor[i]);

        if (cont <4)
            cont++;
        else
        {
            printf("\n");
            cont = 0;
        }

    }
}
//===============================================================
void repetido (int *i, float vetor2[], int *contador)
{
    int j;

    for(j=0;j<*i;j++)
        if (vetor2[*i] == vetor2[j])
        {
            printf ("\n Numero invalido, nao pode ser repetido.\n");
            *i-=1;
            *contador-=1;
        }

}
//===============================================================
void maior_diferenca (int *contador, float vetor2[])
{
    int diferenca, diferenca_max, i, i_max, cont;

    diferenca = diferenca_max = i_max = cont = 0;

    for(i=0;i<*contador-2;i++)
    {
        diferenca = vetor2[i] - vetor2[i+1];

        if (diferenca < 0)
            diferenca*=-1;

        if (diferenca > diferenca_max)
        {
            diferenca_max = diferenca;
            i_max = i;
            cont = 1;
        }

    }

    if (cont == 0)
        printf ("0. Nao houve diferenca.");

    else
        printf ("%d. Entre o Vetor[%d] = %0.f e  o Vetor[%d] = %0.f", diferenca_max, i_max, vetor2[i_max], i_max+1, vetor2[i_max+1]);

}
//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //CRIAR VARIAVEIS

    float opcao, vetor[tam], vetor2[tam2];
    int i, contador;

    //INICIALIZAR VARIAVEIS

    while (opcao != 3)
    {
        opcao = 0;

        contador = 1;

        for(i=0;i<tam;i++)
            vetor[i] = 1;

        for(i=0;i<tam2;i++)
            vetor2[i] = 1;

        opcao = opcao_menu(opcao);

        system("cls");

        i = 0;

        if (opcao != 3)
        {

            if (opcao ==  1)
            {
                printf ("\n 1 - Maior sequencia de numeros iguais consecutivos\n");

                while (i<contador && contador<=tam)
                {
                    printf("\n Informe um numero inteiro de 1 a 9 para o vetor[%d] (zero para finalizar a entrada de numeros) = ", i);
                    vetor[i] = entrada(vetor[i]);
                    vetor[i] = validar(vetor[i], opcao);

                    if (vetor[i] != 0)
                        contador++;

                    i++;
                }

                system ("cls");

                amostragem_vetor(&contador, vetor);

                printf ("\n\n MAIOR SEQUENCIA CONSECUTIVA DE NUMEROS IGUAIS: ");

                maior_sequencia(&contador, vetor);

            }

            else if (opcao == 2)
            {
                printf ("\n 2 - Maior diferenca entre dois numeros consecutivos\n");

                while (i<contador && contador<=tam2)
                {
                    printf("\n Informe um numero inteiro para o vetor[%d] (zero para finalizar a entrada de numeros) = ", i);
                    vetor2[i] = entrada(vetor2[i]);
                    vetor2[i] = validar(vetor2[i], opcao);
                    repetido(&i, vetor2, &contador);

                    if (vetor2[i] != 0)
                        contador++;

                    i++;
                }

                system ("cls");

                amostragem_vetor(&contador, vetor2);

                printf ("\n\n MAIOR DIFERENCA ENTRE DOIS ELEMENTOS CONSECUTIVOS: ");

                maior_diferenca(&contador, vetor2);
            }

            printf("\n\n\n\n Pressione qualquer tecla para voltar ao menu.");
            getch();

        }

        system("cls");

    }

    //FINALIZAR PROGRAMA

    printf ("\n Finalizando programa!\n\n");

    char f = 219;

    for(i=0;i<60;i++)
    {
        printf("%c", f);
        Sleep(30);
    }

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
