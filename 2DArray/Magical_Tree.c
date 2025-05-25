#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int line = (n + 1) / 2 + 5;
    int star = 1;
    int space = line - 1;
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        space--;
        star += 2;
        printf("\n");
    }
    int star_space = ((line * 2) - 1 - n) / 2;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < star_space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int top_height = (n + 11) / 2;

//     // Print the triangular top part of the tree
//     for (int i = 0; i < top_height; i++)
//     {
//         // Print spaces
//         for (int j = 0; j < top_height - i - 1; j++)
//         {
//             printf(" ");
//         }

//         // Print stars
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }

//     // Print the trunk of the tree - always 5 rows tall
//     for (int i = 0; i < 5; i++)
//     {
//         // Print spaces to align with the middle of the tree
//         for (int j = 0; j < top_height - (n + 1) / 2; j++)
//         {
//             printf(" ");
//         }

//         // Print n stars for the trunk
//         for (int j = 0; j < n; j++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }