#include <stdio.h>
int main()
{
    int i, input1, input2, max = 0;

    scanf("%d", &input1);

    for (i = 1; i <= input1; i++)
    {
        scanf("%d", &input2);

        if (input2 > max)
        {
            max = input2;
        }
        //printf("%d\n", max);
    }

    
    printf("%d\n", max);
}