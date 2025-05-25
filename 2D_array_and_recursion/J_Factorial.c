#include <stdio.h>
long long int fac(int n)
{
    if (n == 1)
    {
        return 1;
    }
    long long int mul = fac(n - 1);
    return mul * n;
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int val = fac(n);
    printf("%lld", val);
    return 0;
}