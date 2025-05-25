#include <stdio.h>
#include <stdbool.h>
bool lucky(int num)
{
    while (num > 0)
    {
        int last = num % 10;
        if (last != 4 && last != 7)
        {
            return false;
        }
        num = num / 10;
    }
    return true;
}
int main()
{
    int n;
    scanf("%d", &n);
    bool is_lucky = false;
    for (int i = 1; i <= n; ++i)
    {
        if (lucky(i) && n % i == 0)
        {
            is_lucky = true;
            break;
        }
    }
    if (is_lucky == true)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}