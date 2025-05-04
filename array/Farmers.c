#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int m1, m2, d;
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d);
        int total_farmers = m1 + m2;
        int work_days = m1 * d / total_farmers;
        int days_remaining = d - work_days;
        printf("%d\n", days_remaining);
    }
    return 0;
}