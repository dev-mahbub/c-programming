#include <stdio.h>
void printing_nums(int n)
{
    for (int i = n; i >= 1; i--)
    {
        if (i == 1)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printing_nums(n);
    return 0;
}