#include <stdio.h>
void printing_nums(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printing_nums(n);
    return 0;
}