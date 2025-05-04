#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x = 0;
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] % 3 == 0)
        {
            x++;
        }
        else if (a[i] % 2 == 0)
        {
            x++;
        }
        else if (a[i] % 3 == 0)
        {
            y++;
        }
    }
    printf("%d %d ", x, y);
    return 0;
}