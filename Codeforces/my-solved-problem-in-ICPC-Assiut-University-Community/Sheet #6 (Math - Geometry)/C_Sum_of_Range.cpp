#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int a, b;
cin >> a >> b;
long long int mini=min(a,b);
long long int maxi=max(a,b);
long long int sumOfOneToN = 0;
long long int sumOfEven = 0;
long long int sumOfOdd = 0;
for (long long int i=mini;i<=maxi;i++)
{
    sumOfOneToN += i;

    if(i % 2 == 0)
    {
        sumOfEven += i;
    }
    else
    {
        sumOfOdd += i;
    }
}
cout << sumOfOneToN << endl << sumOfEven << endl << sumOfOdd << endl;
return 0;
}