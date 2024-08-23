//Questao 7

#include <stdio.h>

main ()
{
    int matrizA [3] [3] = {0};
    int matrizB [3] [3] = {0};
    int matrizSoma [3] [3] = {0};
    int linha, coluna;

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf ("Posicao %d, %d da Matriz A: ", linha+1, coluna+1);
            scanf (" %d", &matrizA [linha] [coluna]);
        }
        putchar ('\n');
    }

    putchar ('\n');
    putchar ('\n');

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf ("Posicao %d, %d da Matriz B: ", linha+1, coluna+1);
            scanf (" %d", &matrizB [linha] [coluna]);
        }
        putchar ('\n');
    }

    putchar ('\n');
    putchar ('\n');
    printf ("Matriz somando Matriz A e Matriz B:");
    putchar ('\n');
    putchar ('\n');

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            matrizSoma [linha] [coluna] = matrizA [linha] [coluna] + matrizB [linha] [coluna];
            printf ("\t%d", matrizSoma [linha] [coluna]);
        }
        putchar ('\n');
    }

    getchar ();
}