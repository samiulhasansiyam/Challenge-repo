#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i < n;i++)
    {
        cin >> a[i];
    }
    vector<int> b(n);
    for(int i=0;i < n;i++)
    {
        b[i]=a[n-i-1];
    }
    if (a==b)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
    return 0;
}