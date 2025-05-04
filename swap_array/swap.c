#include <stdio.h>
int main()
{
    int a = 20;
    int b = 10;
    int tmp = a;
    a = b;
    b = tmp;
    printf("A = %d\nB = %d", a, b);
    return 0;
}