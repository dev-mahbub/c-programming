#include <stdio.h>
long long total = 0;
void sum(int a[], int n, int i)
{

    if (i < n)
    {
        total = total + a[i];
        sum(a, n, i + 1);
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
    sum(a, n, 0);
    printf("%lld\n", total);
    return 0;
}