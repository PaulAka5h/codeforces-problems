#include <stdio.h>
int main()
{
    long long input, i,counter=0;
    scanf("%lld", &input);




    for (i=2; i<input ; i++)
    {
        if(input%i == 0)
        {
            counter=1;
        }
    }   
        if(counter==0)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    
    
    
}