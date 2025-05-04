#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 1; i >= n - 1; i--)
    {
        scanf("%d", &a[i]);
        printf("%d", a[i]);
    }
    return 0;
}