#include <stdio.h>

void fun(int x)
{
    x = 20;
}

int main()
{
    int x = 10;
    // only value pass in function
    fun(x);
    printf("%d", x);
    return 0;
}