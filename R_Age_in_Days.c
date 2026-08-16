#include <stdio.h>
int main()
{
    long long input, years, months, days;

    scanf("%lld",&input);
    
    years=input/365;
    printf("%lld years\n", years);

    input=input%365;
    months=input/30;
    printf("%lld months\n", months);

    days=input%30;
    printf("%lld days\n", days);
}