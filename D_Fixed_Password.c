#include <stdio.h>
int main()
{
    int input;
    // scanf("%d", &input);

    while (1)
    {
        scanf("%d", &input);
        if (input == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
}