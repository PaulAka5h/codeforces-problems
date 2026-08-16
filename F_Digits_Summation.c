#include <stdio.h>
int main ()
{
    long long input1 ,input2;

    scanf("%lld %lld", &input1, &input2);

    input1=input1%10;
    input2=input2%10;

    printf("%lld", input1+input2);
}