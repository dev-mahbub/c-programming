#include<stdio.h>
int main()
{
    int a[5];
    for(int i = 1; i<=4; i++){
        scanf("%d", &a[i]);
        printf("a[%d]\n", i);
    } 
    return 0;
}