#include <stdio.h>
int main()
{
    int n = 5;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                int x = (i + 1) - 3;
                int y = (j + 1) - 3;
                int sum = abs(x) + abs(y);
                printf("%d", sum);
            }
        }
    }
    return 0;
}