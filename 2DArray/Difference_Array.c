#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        int b[n];
        for (int j = 0; j < n; j++)
        {
            b[j] = a[j];
        }

        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int flag = b[j];
                if (b[j] > b[k])
                {
                    b[j] = b[k];
                    b[k] = flag;
                }
            }
        }
        int c[n];
        for (int j = 0; j < n; j++)
        {
            c[j] = a[j] - b[j];
        }
        for (int j = 0; j < n; j++)
        {
            printf("%d ", abs(c[j]));
        }
        printf("\n");
    }
    return 0;
}