#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,even = 0,odd = 0, posi = 0, neg = 0 ;
 cin >> n ;
 vector<int> a(n);
 for(int i=0;i<=n-1;i++)
 {
   cin >> a[i] ;
 }

 for(int i=0;i<=n-1;i++)
 {
    if(a[i]%2== 0)
    {
     even++;
    }
    else
    {
     odd++;
    }
    if(a[i] > 0 )
    {
      posi++;
    }
    else if(a[i] < 0 )
    {
      neg++;
    }
 }
 cout <<"Even: " << even << "\n" << "Odd: " << odd << "\n" << "Positive: " << posi << "\n" << "Negative: " << neg << "\n";
return 0;
}