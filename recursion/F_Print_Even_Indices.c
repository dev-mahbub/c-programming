#include <stdio.h>
void printing_indices(int a[], int n, int i)
{
    if (i > n - 1)
    {
        return;
    }
    printing_indices(a, n, i + 2);
    printf("%d ", a[i]);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printing_indices(a, n, 0);
    return 0;
}