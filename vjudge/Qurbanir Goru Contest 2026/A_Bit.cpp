#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int count = 0;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[1] == '+')
        {
            count += 1;
        }
        else if (s[1] == '-')
        {
            count -= 1;
        }
    }
    cout << count << endl;

    return 0;
}
