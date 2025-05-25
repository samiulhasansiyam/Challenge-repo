#include<stdio.h>

int main() {
    long long int a, b, c, max, min;
    scanf("%lld", &a);
    scanf("%lld", &b);
    scanf("%lld", &c);
    max = a;
    min = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    { 
        max = c;
    }
    if (b < min) 
    {
        min = b;
    }
    if (c < min) 
    {
        min = c;
    }

    printf("%lld %lld", min, max);
    return 0;
}