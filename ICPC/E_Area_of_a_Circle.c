#include<stdio.h>
int main()
{
    double r,a;
    const double p=3.141592653;
    scanf("%lf",&r);
    a=p*r*r;
    printf("%.9lf",a);
    return 0;
}