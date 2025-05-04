#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > 0)
        {
            pos = pos + a[i];
        }
        else if (a[i] < 0)
        {
            neg = neg + a[i];
        }
    }
    printf("%d %d", pos, neg);
    return 0;
}