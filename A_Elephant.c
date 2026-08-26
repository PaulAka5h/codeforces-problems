#include <stdio.h>
int main()
{
    long long x, count=0;

    scanf("%lld", &x);

    while (x>0)
    {
        x-=5;
        count++;
    }
    printf("%lld\n", count);
    
}