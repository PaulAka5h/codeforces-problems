#include <stdio.h>
int main()
{
    char input;

    scanf("%c", &input);

    if(input >= 65 && input <= 96)
    {
        printf("ALPHA\nIS CAPITAL");
    }
    if(input >= 97 && input <= 122)
    {
        printf("ALPHA\nIS SMALL");
    }
    if(input >= 48 && input <= 58)
    {
        printf("IS DIGIT");
    }
    
}