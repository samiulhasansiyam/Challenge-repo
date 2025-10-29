#include <bits/stdc++.h>
using namespace std;
int main() {
 int t;
 cin >> t;
 while(t--)
 {
     int n, k, m;
     cin >> n >> k >> m;
     int s=k*m;
     for (int i=1; ;i++)
     {
         if (s*i==n)
         {
             cout << i << endl;
             break;
         }
         else if (s*i>n)
         {
             cout << i << endl;
             break;
         }
     }
 }
    return 0;
}