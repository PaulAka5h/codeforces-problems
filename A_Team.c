//problem 231A
#include <stdio.h>
int main()
{
    long long testcase;
    scanf("%lld", &testcase);

    int output=0;
    
    for(int i=0; i<testcase; i++)
    {
        long long pet, vas, ton;
        scanf("%lld %lld %lld", &pet, &vas, &ton);
        
        if(pet+vas+ton>= 2)
        {
            output++;
        }
    }
    printf("%d", output);
}