#include <stdio.h>
int main()
{
    int pass;
    while (scanf("%d", &pass) !=EOF)
    {
        if (pass == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}

//this loop work with end of file system  while (scanf("%d", &pass))