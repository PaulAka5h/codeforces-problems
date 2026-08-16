#include <stdio.h>
int main()
{
    double input, floatvlaue, decimalvalue;
    int intvalue;

    scanf("%lf", &input);

    floatvlaue=input;
    intvalue=input;
    decimalvalue=floatvlaue-intvalue;

    if(decimalvalue <= 0)
    {
        printf("int %d", intvalue);
    }
    else
    {
        printf("float %d %.3lf", intvalue , decimalvalue);
    }

}