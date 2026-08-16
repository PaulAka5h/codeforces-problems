#include <stdio.h>
int main()
{
    float X, P, originalprice;
    
    scanf("%f %f", &X, &P);

    originalprice=(P*100)/(100-X);

    printf("%.2f\n",originalprice);

}