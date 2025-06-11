#include<bits/stdc++.h>
using namespace std;
int main()
{
int n ,f ;
cin >> n ;
vector<int> a(n) ;
for (int i=0;i<n;i++)
{
cin >> a[i] ;
}
cin >> f ;
for (int i=0;i<n;i++)
{
if(f==a[i])
{
cout << i ;
return 0 ;
}
}
cout << "-1" ;
return 0 ;
}