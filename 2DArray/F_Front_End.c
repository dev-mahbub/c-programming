#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0, j = n - 1; i < n, j > 0; i++, j--)
    {
        if (i == j)
        {
            printf("%d ", a[i]);
        }
        if (i < j)
        {
            printf("%d ", a[i]);
            printf("%d ", a[j]);
        }
    }
    return 0;
}