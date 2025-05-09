#include <stdio.h>
int is_palindrome(char s[])
{
    int length = strlen(s);
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char s[1001];
    scanf("%s", s);
    int val = is_palindrome(s);
    if (val == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}