#include <stdio.h>
#include <math.h>
int main()
{
    double A,B,C,D, X, Y;

    scanf("%lf %lf %lf %lf", &A, &B,&C,&D);

    
    X=B*log(A);
    Y=D*log(C);


    if(X>Y)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
   
} 


