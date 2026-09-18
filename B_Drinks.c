#include <stdio.h>
int main(){
    int testcase;
    scanf("%d", &testcase);

    double sum=0;
    for(int i=0;i<testcase;i++)
    {
        double input;
        scanf("%lf",&input);
        sum += input;
    }
    printf("%.12lf\n",sum/testcase);
}