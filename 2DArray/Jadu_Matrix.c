#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    bool is_diagonal = true;
    if (n == m)
    {
        // it is square matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j || (i + j == n - 1))
                {
                    if (a[i][j] != 1)
                    {
                        is_diagonal = false;
                        break;
                    }
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        is_diagonal = false;
                        break;
                    }
                }
            }
            if (!is_diagonal)
            {
                break;
            }
        }
    }
    else
    {
        // it is not square matrix
        printf("NO\n");
        return 0;
    }
    if (is_diagonal)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}