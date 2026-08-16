#include <stdio.h>
int main(){

    long long A ,B, result;
    char S;
    

    scanf("%lld %c %lld", &A ,&S, &B);

    
    if(S=='+'){
        result=A+B;
    }
    else if(S=='-'){
        result=A-B;
    }
    else if(S=='*'){
        result=A*B;
    }
    else if(S=='/'){
        result=A/B;
    }

    printf("%lld", result);








}






