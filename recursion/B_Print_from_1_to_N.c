#include <stdio.h>
void printing_text(int n)
{
    if (n == 0)
    {
        return;
    }
    printing_text(n - 1);
    printf("%d\n", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    printing_text(n);
    return 0;
}