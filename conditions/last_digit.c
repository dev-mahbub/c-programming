#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int last_digit = x % 10;
    printf("%d", last_digit);
    return 0;
}