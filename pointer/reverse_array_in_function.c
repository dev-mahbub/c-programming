#include <stdio.h>
int rev(int a[], int n)
{
    // printf("%d", *a + (n - 1));
    for (int i = *a + (n - 2); i >= 0; i--)
    {
        printf("%d ", a[i]);
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
    rev(a, n);
    return 0;
}