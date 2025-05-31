#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin >> s;
int n;
cin >> n ;
vector<int> a(n);
for (int i=0;i<n;i++)
{
    cin >> a[i];
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<a[i];j++)
    {
        cout << s ;
    }
    cout << "\n" ;
}
return 0;
}