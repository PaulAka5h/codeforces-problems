#include <stdio.h>
int main()
{
    long long input1, input2, i, gcd;

    scanf("%lld %lld", &input1, &input2);


    for(i=1 ;i<=input1&&i<=input2; i++)
    {
        if(input1%i==0&&input2%i==0)
        {
            gcd=i;
        }
    }

    printf("%lld", gcd);

    
}