#include<stdio.h>
int find_num(int n){
    if(n == 0){
        return;
    }
    int odd_sum = 0;
    
    int last = n% 10;
    // printf("%d", last);
    find_num(n/100);
    odd_sum=odd_sum+last;
    return odd_sum;
}
int main()
{
     int n;
     scanf("%d", &n);
    int sum_odd =  find_num(n);
    printf("%d", sum_odd);
    return 0;
}