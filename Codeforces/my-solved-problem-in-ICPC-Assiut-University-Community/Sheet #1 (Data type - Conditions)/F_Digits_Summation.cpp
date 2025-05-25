#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, ldn, ldm, sum;
    cin >> n >> m;
    ldn = (n % 10);
    ldm = (m % 10);
    sum = (ldn + ldm);
    cout << sum << '\n';
    return 0;
}