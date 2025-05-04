#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 5000)
    {
        printf("cox's bazar\n");
        if (a >= 10000)
        {
            printf("and saint martin");
        }
        else
        {
            printf("go back");
        }
    }
    else if (a >= 2000)
    {
        printf("go to sylhet");
    }
    else
    {
        printf("don't go anywhere");
    }
    return 0;
}