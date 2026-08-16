#include <stdio.h>
int main()
{
    long long a, b, c;
 
        scanf("%lld %lld %lld",&a, &b, &c);
 
 
        if(a<=b && a<=c){
            if(b<=c){
                printf("%lld\n%lld\n%lld\n", a, b, c);
            }
            else{
                printf("%lld\n%lld\n%lld\n", a, c, b);
            }
        }
        else if(b<=a && b<=c){
            if(a<=c){
                printf("%lld\n%lld\n%lld\n", b, a, c);
            }
            else{
                printf("%lld\n%lld\n%lld\n", b, c, a);
            }
        }
        else{
            if(a<=b){
                printf("%lld\n%lld\n%lld\n", c, a, b);
            }
            else{
                printf("%lld\n%lld\n%lld\n", c, b, a);
            }
        }
 
 
 
        printf("\n");
        printf("%lld\n%lld\n%lld\n", a, b, c);
 
 
 
 
}       