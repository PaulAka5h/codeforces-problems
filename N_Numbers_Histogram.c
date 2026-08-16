#include <stdio.h>
int main()
{
    char symbol;
    long long input1, input2, i, j;

    
    scanf("%c", &symbol);
    scanf("%lld", &input1);

    
    if (symbol=='+')
    {
        for(i=1; i<=input1 ; i++)
        {
            scanf("%lld",&input2);

            for(j=1; j<=input2; j++)
            {
                printf("+");
            }
            printf("\n");
        }
    }


    if (symbol=='-')
    {
        for(i=1; i<=input1 ; i++)
        {
            scanf("%lld",&input2);

            for(j=1; j<=input2; j++)
            {
                printf("-");
            }
            printf("\n");
        }
    }    


    if (symbol=='*')
    {
        for(i=1; i<=input1 ; i++)
        {
            scanf("%lld",&input2);

            for(j=1; j<=input2; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

 
    if (symbol=='/')
    {
        for(i=1; i<=input1 ; i++)
        {
            scanf("%lld",&input2);

            for(j=1; j<=input2; j++)
            {
                printf("/");
            }
            printf("\n");
        }
    }    


    



}