#include<stdio.h>
int main()
{
    int num1;
    long long int num2;
    double floattow = 15/4;
    num2 = 12345678912345678;
    float f;
    char c;
    scanf("%d %f %c", &num1, &f, &c);
    printf("%d %f %c\n", num1, f, c);
    printf("Number is = %lld\n", num2);
    printf("%lf", floattow);
    return 0;
}