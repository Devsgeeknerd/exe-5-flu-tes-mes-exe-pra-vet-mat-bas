#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int matriz1[2][2];
    int matriz2[2][2];
    int soma[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Digite o valor para a linha %d e coluna %d da primeira matriz: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Digite o valor para a linha %d e coluna %d da segunda matriz: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\nO valor armazenado para a linha %d e coluna %d corresponde a soma das matrizes é: %d", i, j, soma[i][j]);
        }
    }
    return 0;
}
