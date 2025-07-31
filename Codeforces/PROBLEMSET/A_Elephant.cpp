#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 5 != 0)
    {
        int c = n / 5;
        if (n % 5 == 1 || 2 || 3 || 4)
        {
            c++;
            cout << c << endl;
        }
    }
    else
    {
        int d = n / 5;
        cout << d << endl;
    }
    return 0;
}