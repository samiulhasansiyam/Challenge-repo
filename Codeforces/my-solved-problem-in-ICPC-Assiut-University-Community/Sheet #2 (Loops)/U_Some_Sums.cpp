#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , a , b, x , last , sumOfD , tSum=0;
    cin >> n >> a >> b;
    for (int i=1;i<=n;i++)
    {
        sumOfD=0;
        x=i;
        while ( x > 0 )
        {
            last = x % 10;
            sumOfD += last;
            x /= 10;
        }
        if (sumOfD >= a && sumOfD <= b)
        {
            tSum += i;
        }
    }
    cout << tSum << "\n";
    return 0;
}