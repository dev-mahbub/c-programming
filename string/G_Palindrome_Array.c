#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int tem_arr[n];
    for (int i = 0; i < n; i++)
    {
        tem_arr[i] = a[i];
    }
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int tem = a[i];
        a[i] = a[j];
        a[j] = tem;
    }

    bool is_palindrom = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != tem_arr[i])
        {
            is_palindrom = false;
            break;
        }
    }
    if (is_palindrom == true)
    {

        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}