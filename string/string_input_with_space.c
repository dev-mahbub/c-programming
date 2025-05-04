#include <stdio.h>
int main()
{
    char s[50];
    fgets(s, 20, stdin);
    printf("%s\n", s);
    printf("%c", s[2]);
    return 0;
}