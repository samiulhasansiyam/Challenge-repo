#include <bits/stdc++.h>
using namespace std;
int main() {
 int t;
 cin >> t;
 while(t--)
 {
     long long n;
     cin >> n;
     long long s=1;
     for (int i=1;i<=n;i++)
     {
         s*=i;
     }
      cout << s%10 << endl;
 }
    return 0;
}