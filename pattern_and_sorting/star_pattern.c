#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star--;
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n, star = 1;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= star; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         star++;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }