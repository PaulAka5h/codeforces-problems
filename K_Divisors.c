#include <stdio.h>
int main()
{
    long long input, i;
    scanf("%lld", &input);


    for(i=1; i<=input; i++)
    {
        if(input%i==0)
        {
            printf("%lld\n", i);
        }
    }
    
}