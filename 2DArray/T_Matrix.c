#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }
    int primary_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primary_sum = primary_sum + a[i][j];
            }
        }
    }
    int secondary_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                secondary_sum = secondary_sum + a[i][j];
            }
        }
    }
    int abs_value = abs(primary_sum - secondary_sum);
    printf("%d", abs_value);

    return 0;
}