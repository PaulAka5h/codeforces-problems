#include <stdio.h>
int main()
{
    int input1, input2, even = 0, odd = 0, pos = 0, neg = 0, i;
    scanf("%d", &input1);

    for (i = 1; i <= input1; i++)
    {
        scanf("%d", &input2);

        if (input2 % 2 == 0)
        {
            even++;
        }
        if (input2 % 2 != 0)
        {
            odd++;
        }
        if (input2 > 0)
        {
            pos++;
        }
        if (input2 < 0)
        {
            neg++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
}