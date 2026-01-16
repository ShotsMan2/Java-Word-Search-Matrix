#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i, j, a, java, k, r1, c1, r2, c2, r3, c3, sayac = 0;

    srand(time(NULL));

    n = rand() % 5 + 5;

    char matris[n][n];
    int dolu[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a = rand() % 3;
            if (a == 0)
            {
                matris[i][j] = 'J';
            }
            else if (a == 1)
            {
                matris[i][j] = 'A';
            }
            else
            {
                matris[i][j] = 'V';
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            dolu[i][j] = 0;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%c ", matris[i][j]);
        }
        printf("\n");
    }

    int xyon[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int yyon[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matris[i][j] == 'J')
            {
                for (k = 0; k < 8; k++)
                {
                    r1 = i + xyon[k];
                    c1 = j + yyon[k];

                    r2 = i + 2 * xyon[k];
                    c2 = j + 2 * yyon[k];

                    r3 = i + 3 * xyon[k];
                    c3 = j + 3 * yyon[k];

                    if (r3 >= 0 && r3 < n && c3 >= 0 && c3 < n &&
                        r2 >= 0 && r2 < n && c2 >= 0 && c2 < n &&
                        r1 >= 0 && r1 < n && c1 >= 0 && c1 < n)
                    {
                        if (matris[r1][c1] == 'A' && matris[r2][c2] == 'V' && matris[r3][c3] == 'A')
                        {
                            sayac++;

                            dolu[i][j] = 1;
                            dolu[r1][c1] = 1;
                            dolu[r2][c2] = 1;
                            dolu[r3][c3] = 1;
                        }
                    }
                }
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (dolu[i][j] == 0)
            {
                matris[i][j] = '_';
            }
        }
    }

    printf("\n");

    printf("%d adet java bulundu.\n", sayac);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%c ", matris[i][j]);
        }
        printf("\n");
    }
}
