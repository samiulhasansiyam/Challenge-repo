#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 long long int f=1;
 cin >> n ;
 vector<int> a(n);
 for(int i=1;i<=n;i++)
 {
    cin >> a[i] ;
 }
 for(int i=1;i<=n;i++)
 {
    for( int j=1;j<=a[i];j++)
    {
        f=f*j;
    }
    cout << f << "\n";
    f=1;
 }
return 0;
}