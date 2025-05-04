// #include <stdio.h>
// int main()
// {
//     char s[101];
//     scanf("%s", s);
//     printf("%s\n", s);
//     int sum = 0;
//     for (int i = 0; s[i] != '\0'; i++)
//     {
//         sum++;
//     }
//     printf("%d", sum);
//     return 0;
// }

// built in function

#include <stdio.h>
int main()
{
    int s[101];
    scanf("%s", s);
    int size = strlen(s);
    printf("%d", size);
    return 0;
}