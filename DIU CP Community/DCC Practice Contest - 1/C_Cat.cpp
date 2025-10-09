#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    string a = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'n' && s[i + 1] == 'a')
        {
            a += "nya";
            i++;
        }
        else
        {
            a += s[i];
        }
    }
    cout << a << endl;
    return 0;
}
