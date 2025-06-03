#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin >> n ;
 vector<int> a(n) ;
 for(int i=0;i<=n-1;i++)
 {
    cin >> a[i] ;
 }
 for(int i=0;i<=n-1;i++)
 {
    if (a[i]==0)
    {
    cout<< "0 " ;
    }
    else if(a[i]>0)
    {
        cout << "1 " ;
    }
    else
    {
        cout << "2 " ;
    }
 }

return 0;
}