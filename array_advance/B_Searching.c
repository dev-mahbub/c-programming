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
    int x;
    scanf("%d", &x);
    int value;
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            value = i;
            break;;
        }
        else
        {
            value = -1;
        }
        
    }
    printf("%d", value);
    return 0;
}