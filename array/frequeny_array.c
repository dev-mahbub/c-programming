#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int freq[6] = {0};
    for (int i = 0; i < n; i++)
    {
        int val = a[i];
        freq[val]++;

        // freq[a[i]]++;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", freq[i]);
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int cnt1 = 0;
//     int cnt2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == 1)
//         {
//             cnt1++;
//         }
//         if (a[i] == 5)
//         {
//             cnt2++;
//         }
//     }
//     printf("%d\n", cnt1);
//     printf("%d\n", cnt2);
//     return 0;
// }