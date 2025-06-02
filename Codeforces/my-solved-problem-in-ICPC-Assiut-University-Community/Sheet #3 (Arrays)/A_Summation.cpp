#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
long long int sum = 0;
cin >> n;
vector<long long int> a(n);
for (int i = 0; i < n; i++) 
{
    cin >> a[i];
}
for (int i = 0; i < n; i++) 
{
    sum += a[i];
}
cout << abs(sum);
return 0;
}
