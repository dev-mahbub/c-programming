#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        long long int mul, a, b, c;
        scanf("%lld %lld %lld %lld", &mul, &a, &b, &c);
        long long int mul1 = a * b * c;

        if (mul % mul1 == 0)
        {
            long long int result = mul / mul1;
            printf("%lld", result);
            printf("\n");
        }
        else
        {
            printf("-1");
            printf("\n");
        }
    }
    return 0;
}