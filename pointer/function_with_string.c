#include <stdio.h>
#include <string.h>
void fun(char s[])
{
    int lenght = strlen(s);
    for (int i = 0; i < lenght; i++)
    {
        printf("%c", s[i]);
    }
}
int main()
{
    char s[5];
    scanf("%s", s);
    fun(s);

    return 0;
}