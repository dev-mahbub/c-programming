#include <stdio.h>
void hello()
{
    printf("recursion occured\n");
    hello();
}
int main()
{
    hello();
    return 0;
}