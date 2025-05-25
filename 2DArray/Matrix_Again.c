#include <stdio.h>
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
    int sr = n - 1;
    for (int i = 0; i < m; i++)
    {
        printf("%d ", a[sr][i]);
    }
    printf("\n");
    int sc = m - 1;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i][sc]);
    }

    return 0;
}