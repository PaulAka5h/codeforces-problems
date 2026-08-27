#include <stdio.h>
int main()
{
    long long input, input1, sum;

    scanf("%lld", &input);

    while (input--)
    {
        scanf("%lld", &input1);

        sum=(input1/10)+(input1%10);
        printf("%lld\n", sum);
    }

    // printf("%lld\n", sum);
    
}