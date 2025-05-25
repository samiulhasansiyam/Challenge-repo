//it's not go with time limit
#include<stdio.h>
int main()
{
    long long int n,i,sum=0;
    scanf("%lld",&n);

    for (i=1;n>=i;i++)
    {
        sum=sum+i;
    }
    printf("%lld",sum);
    return 0;
}