#include <stdio.h>
#include <limits.h>
int find_max(int a[], int n, int i)
{
    if (i == n - 1)
    {
        return a[i];
    }
    int rest = find_max(a, n, i + 1);
    if (a[i] < rest)
    {
        return rest;
    }
    else
    {
        return a[i];
    }
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
    int max_val = find_max(a, n, 0);
    printf("%d", max_val);
    return 0;
}