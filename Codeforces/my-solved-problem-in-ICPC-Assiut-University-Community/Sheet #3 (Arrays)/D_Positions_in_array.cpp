#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin >> n;

 vector<long long int> a(n) ;
 for(int i=0;i<=n-1;i++)
 {
    cin >> a[i] ;
 }
 for(int i=0;i<=n-1;i++)
 {
    if(a[i]<=10)
    {
        cout << "A[" << i << "] = " << a[i] << "\n";
    }
 }

return 0;
}