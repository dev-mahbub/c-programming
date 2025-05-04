#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    char s[10001];
    for (int i = 0; i < t; i++)
    {
        scanf("%s", s);
        int cons = 0;
        int small = 0;
        int digit = 0;
        int lenght = strlen(s);
        for (int j = 0; j < lenght; j++)
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                cons++;
            }
            if (s[j] >= 'a' && s[j] <= 'z')
            {
                small++;
            }
            if (s[j] >= '0' && s[j] <= '9')
            {
                digit++;
            }
        }
        printf("%d %d %d\n", cons, small, digit);
    }

    return 0;
}