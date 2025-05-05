#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = space; j >= 1; j--)
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
    int rev_space = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= rev_space; j++)
        {
            printf(" ");
        }
        for (int j = star - 2; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
        star -= 2;
        rev_space++;
    }
    return 0;
}