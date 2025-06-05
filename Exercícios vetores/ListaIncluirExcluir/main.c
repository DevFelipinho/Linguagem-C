/*===============================================================

    Elaborar um Algoritmo que crie um vetor do tipo inteiro de dimensão 100. Preencher
    somente as 50 (cinco) primeiras posições com números randômicos (não se esquecer de
    ativar a semente do cronômetro com a função srand(time(NULL))).
     Validar corretivamente durante o preenchimento para NÃO ter número 0 (zero)
    e NÃO ter números repetidos.
    FUNÇÕES:
    1) Função para preencher até a metade da quantidade de linhas do vetor;
    2) Função para validar corretivamente durante a entrada para não ter zero e não
    ter números repetidos;
    3) Função para ordenar o vetor em ordem crescente;
    4) Função para mostrar o vetor até a posição em que está sendo utilizada;
    5) Função para pesquisar no vetor a existência ou não do número a ser inserido
    ou excluído;
    6) Função para receber o números de pesquisa e validar corretivamente não
    menor 1 (um).
    OBSERVAÇÃO:
    1) Será utilizada apenas um vetor para inserção e/ou exclusão (proibido uso de
    outro vetor);
    2) só criar o menu após preencher e ordenar o vetor até a posição em que foi
    preenchida.
    APÓS O PREENCHIMENTO, criar um Menu conforme abaixo.
     MENU DE OPÇÕES
     ================
     1 – INSERIR NUMERO
     2 – EXCLUIR NUMERO
     3 – SAIR
     Escolha o número de uma das opções acima...: _
    Opçao1:
    a) Mostrar vetor;
    b) Receber um número, pesquisar se ele existe no vetor, caso exista dar uma
    mensagem mostrando sua posição ele está e permitir que volte ao menu
    principal;
    c) Caso contrário (não exista), localizar a posição onde será inserido em sua ordem
    crescente, e depois passar todos os números para frente liberando o espaço para
    inclusão. Porém, antes de fazer a inclusão, verificar se existe espaço vazio no
    vetor;
    d) Proibido alocar o número na última após a última posição utilizada e mandar
    re-ordenar o vetor. A inclusão deve ser feita passando os números para as
    posições seguintes liberando o espaço o qual será inserido.
    Opção2:
    a) Mostra vetor;
    b) Receber um número, pesquisar se ele existe no vetor, caso NÃO exista dar uma
    mensagem e permitir que volte ao menu principal.
    c) Caso contrário (exista), localizar a posição e fazer a exclusão, ou seja, trazer os
    números que estão a sua frente e zerando a última posição para que possa ser
    utilizada.

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1º PERÍODO - DISCIPLINA DE ALGORITMO E LÓGICA DE PROGRAMAÇÃO
    Nome do aluno(a): Felipe Lara Facin
    1 SEMESTRE 2025
    Prof. Ernani Claudio Borges
    data: Junho 2025

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

#define tam 100

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================
void preencher (int vetor[]);
void validar (int vetor[], int *i);
void crescente (int vetor[]);
void amostragem (int vetor[]);
void menu (int *esco);
void receber_menu (int *esco);
void validar_menu (int *esco);
void receber_num (int *num);
void validar_num (int *num);
void existencia (int *n, int v[]);
void incluir (int *n, int v[]);
void receber_num2 (int *num);
void validar_num2 (int *num);
void existencia2 (int *n, int v[]);
void excluir (int *n, int v[]);

//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================
void preencher (int vetor[])
{
    int i;

    for(i=0;i<(tam/2);i++)
    {
        vetor[i] = 1 + rand() % (tam);

        validar(vetor, &i);
    }

    crescente(vetor);
}
//===============================================================
void validar (int vetor[], int *i)
{
    int j;

    for(j=0;j<*i;j++)
        if(vetor[*i] == vetor[j])
            *i-=1;
}
//===============================================================
void crescente (int vetor[])
{
    int i, j, aux;

    aux = 0;

    for (i=0;i<tam;i++)
        for(j=0;j<tam-1;j++)
            if(vetor[j] > vetor[j+1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }

}
//===============================================================
void amostragem (int vetor[])
{
    int i, cont;

    cont = 1;

    printf ("\n             AMOSTRAGEM DO VETOR");
    printf ("\n           =======================\n\n");

    for(i=0;i<tam;i++)
        if (vetor[i]!=0)
        {
            printf("     %-3d", vetor[i]);

            if (cont<5)
                cont++;

            else
            {
                printf ("\n");
                cont=1;
            }

        }

}
//===============================================================
void menu (int *esco)
{
    printf ("\n\n             MENU DE OPCOES");
    printf ("\n           ==================\n");
    printf ("\n 1 - INSERIR NUMERO");
    printf ("\n 2 - EXCLUIR NUMERO");
    printf ("\n 3 - SAIR\n");
    printf ("\n ESCOLHA O NUMERO DE UMA DAS OPCOES ACIMA: ");

    receber_menu(&*esco);

}
//===============================================================
void receber_menu (int *esco)
{
    fflush (stdin);
    scanf ("%d", &*esco);

    validar_menu(&*esco);
}
//===============================================================
void validar_menu (int *esco)
{
    while (*esco != 1 && *esco != 2 && *esco != 3)
    {
        printf (" Escolha invalida, digite novamente: ");
        fflush (stdin);
        scanf ("%d", &*esco);
    }
}
//===============================================================
void receber_num (int *num)
{
    printf ("\n Informe o numero a ser incluido: ");
    fflush (stdin);
    scanf ("%d", &*num);

    validar_num(&*num);
}
//===============================================================
void validar_num (int *num)
{
    while (*num < 1)
    {
        printf ("\n Numero invalido, precisa ser maior que zero. Digite novamente: ");
        fflush (stdin);
        scanf ("%d", &*num);
    }
}
//===============================================================
void existencia (int *n, int v[])
{
    int i, cont, contador;

    cont = 0;
    contador = 0;

    for (i=0;i<tam;i++)
    {
        if (*n == v[i])
        {
            printf ("\n Numero ja existente no vetor na posicao [%d].", contador);
            cont = 1;
        }

        if (v[i] != 0)
        {
            contador++;
        }
    }

    if (cont == 0)
        incluir(&*n, v);
}
//===============================================================
void incluir (int *n, int v[])
{
    int i, cont, posi, aux, j;

    cont = 0;
    posi = 0;
    aux = 0;

    for (i=0;i<tam;i++)
        if(v[i] == 0)
            cont++;

    if (cont == 0)
        printf ("\n O vetor esta cheio, nao eh possivel adicionar numeros.");

    else
    {
        i = 0;
        while (*n > v[i])
        {
            i++;
        }

        i--;

         posi = i;

         for(j=0;j<i;j++)
         {
            aux = v[j];
            v[j] = v[j+1];
            v[j+1] = aux;
         }

         v[posi] = *n;

         amostragem(v);
    }


}
//===============================================================
void receber_num2 (int *num)
{
    printf ("\n\n Informe o numero a ser excluido: ");
    fflush (stdin);
    scanf ("%d", &*num);

    validar_num2(&*num);
}
//===============================================================
void validar_num2 (int *num)
{
    while (*num < 1)
    {
        printf ("\n Numero invalido, precisa ser maior que zero. Digite novamente: ");
        fflush (stdin);
        scanf ("%d", &*num);
    }
}
//===============================================================
void existencia2 (int *n, int v[])
{
    int i, cont;

    cont = 0;

    for (i=0;i<tam;i++)
    {
        if (*n == v[i])
        {
            cont = 1;
        }
    }

    if (cont == 1)
        excluir(&*n, v);

    else
        printf ("\n Numero nao existente no vetor.");
}
//===============================================================
void excluir (int *n, int v[])
{
    int i, aux, j;

    aux = 0;

    for(i=0;i<tam;i++)
        if (*n == v[i])
        {
            v[i] = 0;

            for(j=i;j>0;j--)
            {
                aux = v[j];
                v[j] = v[j-1];
                v[j-1] = aux;
            }
        }

         amostragem(v);
}
//===============================================================
//===============================================================
//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //CRIAR VARIAVEIS

    int vetor[tam], i, esco, num;

    //INICIALIZAR VARIAVEIS

    srand(time(NULL));

    for(i=0;i<tam;i++)
        vetor[i] = 0;

    preencher(vetor);

    while (esco != 3)
    {
        num = 0;

        amostragem(vetor);

        menu(&esco);

        if (esco != 3)
        {
            if (esco == 1)
            {
                system ("cls");

                amostragem(vetor);

                receber_num(&num);

                existencia(&num, vetor);
            }

            else if (esco == 2)
            {
                system ("cls");

                amostragem(vetor);

                receber_num2(&num);

                existencia2(&num, vetor);
            }

            printf ("\n\n\n\n Pressione qualquer tecla para voltar ao menu de opcoes.");
            getch();

            system("cls");
        }
    }

    system("cls");

    char c = 219;

    printf ("\n Finalizando programa...\n\n");
    for (i=0; i<60;i++)
    {
        printf ("%c", c);
        Sleep(25);
    }

    //FINALIZAR PROGRAMA

    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
