#include <stdio.h>
int main()
{
    char input;

    scanf("%c", &input);

    if(input >= 97 && input <= 122)
    {
        int x=input;
        printf("%c", x-32);
    }
    else //(input >= 97 && input <= 122)
    {
        int x=input;
        printf("%c", x+32);
    }
    
}