#include <stdio.h>
int main()
{
    int input, i, factorial, j, input2;

    scanf("%d", &input);

    for (j = 1; j <= input; j++)
    {
        scanf("%d", &input2);


        factorial=1;
        
        for (i = input2; i >= 1; i--)
        {
            factorial = factorial * i;
        }

        printf("%d\n", factorial);
    }


        //printf("%d\n", factorial);

    /*for (i = input; i >= 1; i--)
    {
        factorial = factorial * i;
    }

    printf("%d", factorial);
    */
}