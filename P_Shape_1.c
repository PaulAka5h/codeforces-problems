#include <stdio.h>
int main()
{
    long long input,i,j;

    scanf("%lld",&input);

    for (i=1;i<=input;i++)
    {
        for (j=input;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}