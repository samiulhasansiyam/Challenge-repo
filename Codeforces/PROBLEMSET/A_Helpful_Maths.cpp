#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    s.length();
    int l = s.length() / 2;
    for (int i = l; i < s.length(); i++)
    {
        if (i > l)
        {
            cout << "+";
        }
        cout << s[i];
    }
    return 0;
}
