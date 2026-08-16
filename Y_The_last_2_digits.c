#include <stdio.h>
int main()
{
    long long A,B,C,D,X;
    scanf("%lld %lld %lld %lld", &A,&B,&C,&D);


    X=((A%100)*(B%100)*(C%100)*(D%100))%100;

    printf("%02lld",X);
}