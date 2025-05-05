#include <stdio.h>
int sum(int a, int b)
{
    int ans = a + b;
    return ans;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int val = sum(a, b);
    printf("%d", val);
    return 0;
}