#include <stdio.h>
int main()
{
    long long inp1, inp2, divider;
    scanf("%lld %lld %lld", &inp1, &inp2, &divider);

    if(inp1 % divider ==0 && inp2 % divider ==0)
    {
        printf("Both");
    }
    else if(inp1 % divider ==0 && inp2 % divider != 0)
    {
        printf("Memo");
    }
    else if(inp1 % divider !=0 && inp2 % divider == 0)
    {
        printf("Momo");
    }
    else 
    {
        printf("No One");
    }
}