#include <stdio.h>
void printing_text(int n)
{
    if (n == 0)
    {
        return;
    }
    if (n == 1)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d ", n);
    }
    printing_text(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printing_text(n);
    return 0;
}