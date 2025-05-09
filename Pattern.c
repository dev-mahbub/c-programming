#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    int star = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = space; j >= 1; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
        space--;
        star += 2;
    }
    int rev_space = 1;
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= rev_space; j++)
        {
            printf(" ");
        }
        for (int j = star - 4; j >= 1; j--)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
        rev_space++;
        star -= 2;
    }
    return 0;
}