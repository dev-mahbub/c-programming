#include <stdio.h>
long long int sum(long long int a[], int n, int i)
{
    if (i == n)
    {
        return 0;
    }
    long long int total = sum(a, n, i + 1);
    return total + a[i];
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    long long int total_val = sum(a, n, 0);
    printf("%lld\n", total_val);
    return 0;
}