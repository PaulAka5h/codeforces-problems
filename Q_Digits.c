#include <stdio.h>
int main()
{
    long long input1, input2, i, count;
    
    scanf("%lld", &input1);
    for(i=1; i<=input1; i++)
    {
        scanf("%lld", &input2);

        if(input2==0)
        {
            printf("0");
        }
        while (input2>0)
        {
            count=input2%10;
            printf(" ");
            printf("%lld", count);
            input2=input2/10;
            
        }

        printf("\n");
        
        
    }
} 
