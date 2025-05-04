#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];

    if (fgets(s, sizeof(s), stdin) == NULL)
    {
        return 1;
    }

    int length = strlen(s);
    if (length > 0 && s[length - 1] == '\n')
    {
        s[length - 1] = '\0';
        length--;
    }

    for (int i = 0; i < length; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            printf("%c", s[i] + 32);
        }
        else if (s[i] == ',')
        {
            printf(" ");
        }
        else
        {
            printf("%c", s[i]);
        }
    }

    return 0;
}