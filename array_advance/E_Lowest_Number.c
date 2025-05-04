#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int x = INT_MAX;
    int idx;
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] < x){
            x = a[i];
            idx = i;
        }
    }
    printf("%d %d", x, idx);
    return 0;
}