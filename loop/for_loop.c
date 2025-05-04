#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if(i % 2 == 1){
            sum = sum + i;
        }
    }
    printf("sum is = %d", sum);
    return 0;
}