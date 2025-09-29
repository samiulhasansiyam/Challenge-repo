#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, sum = 0;
        cin >> a >> b;
        for (int i = a; i < b; i++)
        {
            sum += i;
        }
        cout << sum + b << endl;
    }
    return 0;
}
