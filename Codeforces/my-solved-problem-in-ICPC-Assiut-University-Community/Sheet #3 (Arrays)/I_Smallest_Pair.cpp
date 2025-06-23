#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, keep,sum,d;
    cin >> t;
    int n;
    cin >> n;
    vector<long long int> a(n);
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            
            sum=(a[i]+a[j])+(j-i);
            d=sum;
            if (keep > d)
            {
                keep = d;
            }
        }
    }
    cout << keep ;
    return 0;
}