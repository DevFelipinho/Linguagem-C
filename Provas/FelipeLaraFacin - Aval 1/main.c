#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <conio.h>

//Nome completo: Felipe Lara Facin

//Curso: Análise e Desenvolvimento de Sistemas

//CPF: 083.100.081-39

//Data: 23/04/2025

int main()
{
    int menu, num1, cont, div, ida, quantA, quantB, quantC, quantD, quantE;
    char nota, esco, ch;
    float espec, percA, percB, percC, percD, percE, idaTotal, med, lucro, preco, ingre;


    menu = 0;
    num1 = 0;
    cont = 2;
    div = 0;
    ida = 0;
    nota = ' ';
    esco = ' ';
    espec = 0;
    quantA = 0;
    quantB = 0;
    quantC = 0;
    quantD = 0;
    quantE = 0;
    percA = 0;
    percB = 0;
    percC = 0;
    percD = 0;
    percE = 0;
    med = 0;
    idaTotal = 0;
    ch = ' ';
    ingre = 120;
    preco = 5;
    lucro = 0;

    while (menu != 4)
    {
        printf ("\n\n\n             Menu principal");
        printf ("\n");
        printf ("\n 1) Fatoracao de um numero inteiro.");
        printf ("\n 2) Pesquisa de filme no cinema.");
        printf ("\n 3) Companhia de teatro.");
        printf ("\n 4) Finalizar Algoritmo.");
        printf ("\n");
        printf ("\n Informe uma das opcoes (1, 2, 3 ou 4): ");

        do
        {
            fflush(stdin);
            scanf("%d", &menu);

            if (menu != 1 && menu != 2 && menu != 3 && menu != 4)
            {
                printf ("\n Opcao invalida, digite novamente: ");
            }
        }while (menu != 1 && menu != 2 && menu != 3 && menu != 4);

        system ("cls");

        if (menu == 1)
        {
            printf("\n Informe um numero inteiro e positivo: ");

            do
            {
                fflush (stdin);
                scanf ("%d", &num1);

                if (num1 <= 0)
                {
                    printf ("\n Numero invalido, digite novamente: ");
                }
            }while (num1 <= 0);

            while (num1 != 1)
            {
                if (num1 % cont == 0)
                {
                    printf ("\n %10d | %d", num1, cont);
                    div = num1 / cont;
                    num1 = div;
                    cont = 2;
                    Sleep (150);
                }

                else
                {
                    cont++;
                }
            }

            if (num1 == 1)
            {
                printf ("\n %10d", num1);
            }
        }

        if (menu == 2)
        {

            do
            {
                printf ("\n        Senso do cinema");
                printf ("\n ");
                printf ("\n Informe a sua idade: ");

                do
                {
                    fflush (stdin);
                    scanf ("%d", &ida);

                    if (ida<18)
                    {
                        printf ("\n A idade deve ser maior ou igual a 18 anos, digite novamente: ");
                    }

                }while (ida<18);

                printf ("\n Informe a sua opiniao em relacao ao filme, segundo as seguintes notas: \n");
                printf ("\n       Nota | Significado");
                printf ("\n       ------------------");
                printf ("\n       A    |  Otimo");
                printf ("\n       B    |  Bom");
                printf ("\n       C    |  Regular");
                printf ("\n       D    |  Ruim");
                printf ("\n       E    |  Pessimo");
                printf ("\n ");
                printf ("\n Nota: ");

                do
                {
                    fflush (stdin);
                    scanf ("%c", &nota);

                    if (nota != 'A' && nota != 'a' && nota != 'b' && nota != 'B' && nota != 'c' && nota != 'C' && nota != 'd' && nota != 'D' && nota != 'E' && nota != 'e')
                    {
                        printf ("\n Nota invalida, digite novamente: ");;
                    }
                }while (nota != 'A' && nota != 'a' && nota != 'b' && nota != 'B' && nota != 'c' && nota != 'C' && nota != 'd' && nota != 'D' && nota != 'E' && nota != 'e');

                espec++;

                if (nota == 'A' || nota == 'a')
                {
                    quantA++;
                }

                if (nota == 'B' || nota == 'b')
                {
                    quantB++;
                }

                if (nota == 'C' || nota == 'c')
                {
                    quantC++;
                }

                if (nota == 'D' || nota == 'd')
                {
                    quantD++;
                }
                if (nota == 'E' || nota == 'e')
                {
                    quantE++;
                }

                idaTotal+=ida;

                printf ("\n Deseja adicionar uma nota (<<s>> para sim e <<n>> para nao)? ");

                do
                {
                    fflush (stdin);
                    scanf ("%c", &esco);

                    if (esco != 'n' && esco != 'N' && esco != 's' && esco != 'S')
                    {
                        printf ("\n Escolha invalida, digite novamente: ");
                    }
                }while (esco != 'n' && esco != 'N' && esco != 's' && esco != 'S');

                system ("cls");


            }while (esco != 'n' && esco != 'N');

            percA = (quantA / espec) *100;
            percB = (quantB / espec) *100;
            percC = (quantC / espec) *100;
            percD = (quantD / espec) *100;
            percE = (quantE / espec) *100;
            med = idaTotal / espec;

            system ("cls");

            printf ("\n Total de espectadores que responderam: %.0f", espec);
            printf ("\n ");
            printf ("\n Quantidade da nota A.................: %d", quantA);
            printf ("\n Quantidade da nota B.................: %d", quantB);
            printf ("\n Quantidade da nota C.................: %d", quantC);
            printf ("\n Quantidade da nota D.................: %d", quantD);
            printf ("\n Quantidade da nota E.................: %d", quantE);
            printf ("\n ");
            printf ("\n Percentual da nota A em relacao ao total de espectadores: %.2f%%", percA);
            printf ("\n Percentual da nota B em relacao ao total de espectadores: %.2f%%", percB);
            printf ("\n Percentual da nota C em relacao ao total de espectadores: %.2f%%", percC);
            printf ("\n Percentual da nota D em relacao ao total de espectadores: %.2f%%", percD);
            printf ("\n Percentual da nota E em relacao ao total de espectadores: %.2f%%", percE);
            printf ("\n ");
            printf ("\n Media de idade dos espectadores: %.2f", med);

        }

        if (menu == 3)
        {
            printf ("\n                         Tabela de valores");
            printf ("\n");
            printf ("\n   Lucro maximo esperado | Preco do ingresso | Numero de ingressos");
            printf ("\n   ---------------------------------------------------------------");

            while (preco >= 1)
            {
                lucro = (ingre * preco) - 200;

                printf ("\n      R$ %.2f          |     R$ %.2f       |        %.0f",lucro, preco, ingre);

                preco-= 0.5;
                ingre+=26;
                Sleep (200);


            }
        }

        num1 = 0;
        cont = 2;
        div = 0;
        ida = 0;
        nota = ' ';
        esco = ' ';
        espec = 0;
        quantA = 0;
        quantB = 0;
        quantC = 0;
        quantD = 0;
        quantE = 0;
        percA = 0;
        percB = 0;
        percC = 0;
        percD = 0;
        percE = 0;
        med = 0;
        idaTotal = 0;
        ch = ' ';
        ingre = 120;
        preco = 5;
        lucro = 0;

        if (menu != 4)
        {
            printf ("\n\n\n\n\n Pressione qualquer tecla para voltar ao menu: ");
            ch = getch();

            system ("cls");
        }

    }

    printf ("\n\n\n\n Algoritmo finalizado, VOLTE SEMPRE!!!\n\n\n\n");







    return 0;
}
