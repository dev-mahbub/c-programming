#include <stdio.h>
void printing_array(int a[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    printf("%d\n", a[i]);
    printing_array(a, n, i + 1);
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
    printing_array(a, n, 0);
    return 0;
}