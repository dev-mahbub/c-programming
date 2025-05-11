#include <stdio.h>
void printing_text(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("I love Recursion\n");
    printing_text(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printing_text(n);
    return 0;
}