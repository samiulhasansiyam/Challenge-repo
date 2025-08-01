#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,x,y;
cin >> n >> x >> y;
int a[n];
for (int i=0;i<n;i++)
{
    cin >> a[i];
}
if(a[x-1]%a[y-1]== 0 || a[y-1]%a[x-1]==0)
{
    cout << "YES" << endl;
}
else
{
    cout << "NO" << endl;
}
return 0;
}