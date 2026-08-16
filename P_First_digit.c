#include <stdio.h>
#include <math.h>
int main()
{
    long long input, X, Y;

    scanf("%lld", &input);

    X=log10(input);
    Y=input/pow(10,X);

    if(Y%2==0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    
}