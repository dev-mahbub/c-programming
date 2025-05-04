#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    int d_star = n + 2;
    int d_space = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= d_space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= d_star; j++)
        {
            printf("*");
        }
        printf("\n");
        d_star -= 2;
        d_space++;
    }

    return 0;
}
