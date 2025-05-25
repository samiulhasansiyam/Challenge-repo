#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d, r;
    cin >> a >> b >> c >> d;
    r=((((a%100)*(b % 100)) %100)*(((c % 100)*(d % 100))%100)%100);
    cout << setw(2) << setfill('0') << r;
return 0;
}