#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int large_number;
    int small_number;
    if (a >= b && a >= c)
    {
        large_number = a;
        if (b <= c)
        {
            small_number = b;
        }
        else if (c <= b)
        {
            small_number = c;
        }
    }
    else if (b >= a && b >= c)
    {
        large_number = b;
        if (a <= c)
        {
            small_number = a;
        }
        else if (c <= a)
        {
            small_number = c;
        }
    }
    else
    {
        large_number = c;
        if (a <= b)
        {
            small_number = a;
        }
        else if (b <= a)
        {
            small_number = b;
        }
    }
    printf("%d ", small_number);
    printf("%d", large_number);
    return 0;
}