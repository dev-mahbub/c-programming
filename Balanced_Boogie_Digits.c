#include <stdio.h>
int count_balance(int i)
{

    int last = i % 10;
    int first = i / 10;
    int odd = 0;
    int even = 0;
    if (last % 2 == 0)
    {
        even++;
    }
    else if (first % 2 == 0)
    {

        even++;
    }
    if (!first % 2 == 0)
    {
        odd++;
    }
    else if (!last % 2 == 0)
    {
        odd++;
    }
    if (odd == even)
    {
        return i;
    }
}
int main()
{
    int l, r;
    scanf("%d %d", &l, &r);
    for (int i = l; i < r; i++)
    {
        int output = count_balance(i);
        printf("%d\n", output);
    }
    return 0;
}