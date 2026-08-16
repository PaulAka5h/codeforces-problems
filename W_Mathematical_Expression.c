#include <stdio.h>

int main()
{
    long long a, b, c;
    char s, q;

    scanf("%lld %c %lld %c %lld", &a, &s, &b, &q, &c);

    if (s == '+' && q == '=')
    {
        if (a + b == c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%lld", a + b);
        }
    }
    else if (s == '-' && q == '=')
    {
        if (a - b == c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%lld", a - b);
        }
    }
    else if (s == '*' && q == '=')
    {
        if (a * b == c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%lld", a * b);
        }
    }
}