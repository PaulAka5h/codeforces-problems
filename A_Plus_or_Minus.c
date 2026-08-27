#include <stdio.h>
int main()
{
    long long testcase, a,b,c;
    scanf("%lld", &testcase);

    while (testcase--)
    {
        scanf("%lld %lld %lld", &a, &b,&c);
        if(a + b == c)
        {
            printf("+\n");
        }
        else
        {
             printf("-\n");
        }
    }
    
}