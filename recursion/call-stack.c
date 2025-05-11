#include <stdio.h>
void gello()
{
    printf("gello\n");
}
void mello()
{
    printf("mello\n");
    gello();
}
void hello()
{
    printf("hello\n");
    mello();
}
int main()
{
    hello();
    return 0;
}