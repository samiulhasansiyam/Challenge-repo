#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, aOut = 0, bOut = 0;
    cin >> a >> b;
    if (a < b)
    {
        int s = b - a;
        cout << a << " " << s / 2 << endl;
    }
    else
    {
        int s = a - b;
        cout << b << " " << s / 2 << endl;
    }
    return 0;
}
