#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", s);
    int length = strlen(s);
    int freq[150] = {0};
    for (int i = 0; i < length; i++)
    {
        int val = s[i];
        freq[val]++;
    }
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c - %d\n", i, freq[i]);
        }
    }

    return 0;
}