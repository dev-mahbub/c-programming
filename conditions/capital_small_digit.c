#include <stdio.h>
int main()
{
    char letter;
    scanf("%c", &letter);
    if (letter >= '0' && letter <= '9')
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if (letter >= 'a' && letter <= 'z')
        {
            printf("IS SMALL");
        }
        else if (letter >= 'A' && letter <= 'Z')
        {
            printf("IS CAPITAL");
        }
    }

    return 0;
}