#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int x;
    scanf("%d", &x);
    bool is_take_num = true;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == x)
            {
                is_take_num = false;
            }
        }
    }
    if (is_take_num == true)
    {
        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }

    return 0;
}