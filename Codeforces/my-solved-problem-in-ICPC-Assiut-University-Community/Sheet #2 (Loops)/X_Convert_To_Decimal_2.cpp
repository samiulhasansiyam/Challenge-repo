#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, x, count, sum;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> x;
        count=0;
        while (x > 0)
        {
            count += x % 2;
            x /= 2;
        }
        sum=pow(2,count)-1;
        cout << sum << "\n";
    }
    return 0;
}