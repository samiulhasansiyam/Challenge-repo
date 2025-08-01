#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int n;
    cin >> n;
    vector <long long> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    bool flag =true;
    for(int i=0;i<n;i+=2)
    {
        int sum=a[i]+a[i+1];
        if (sum%2==0)
        {
            flag=false;
            break;
        }
        else
        {
            flag=true;
        }
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
    return 0;
}