#include <stdio.h>
int main()
{
    long long input, output=0, i;
    char arr[500];
    scanf("%lld", &input);

    for(i=0; i<input; i++)
    {
        scanf("%s", &arr);

        if(arr[1]=='+')
        {
            output++;
        }
        else
        {
            output--;
        }
    }

    printf("%lld\n", output);

}