#include <stdio.h>
#include <string.h>
int main()
{
    char fname1[1000], fname2[1000], lname1[1000] , lname2[1000];

    scanf("%s %s", &fname1 , &lname1);
    scanf("%s %s", &fname2 , &lname2);

 
    if (strcmp(lname1,lname2)==0)
{
    printf("ARE Brothers");
}
else
{
    printf("NOT");
}

}