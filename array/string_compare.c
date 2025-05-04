#include <stdio.h>
#include <stdbool.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    // built in function
    int val = strcmp(a, b);
    if (val < 0)
    {
        printf("a is smaller");
    }
    else if (val == 0)
    {
        printf("Equal");
    }
    else if (val > 0)
    {
        printf("b is smaller");
    }

    // logic

    //  int i = 0;
    //  while (true)
    //  {
    //      if (a[i] == '\0' && b[i] == '\0')
    //      {
    //          printf("Equal 1");
    //          break;
    //      }
    //      else if (a[i] == '\0')
    //      {
    //          printf("a is small 2");
    //          break;
    //      }
    //      else if (b[i] == '\0')
    //      {
    //          printf("b is small 3");
    //          break;
    //      }
    //      else if (a[i] == b[i])
    //      {
    //          i++;
    //          continue;
    //      }
    //      else if (a[i] < b[i])
    //      {
    //          printf("a is small 4");
    //          break;
    //      }
    //      else if (a[i] > b[i])
    //      {
    //          printf("b is small 5");
    //          break;
    //      }
    //  }
    return 0;
}