#include <stdio.h>
int main()
{
    char a[4];
    for (char i = 0; i < 4; i++)
    {
        scanf("%c", &a[i]);
        printf("%c\n", a[i]);
    }

    return 0;
}