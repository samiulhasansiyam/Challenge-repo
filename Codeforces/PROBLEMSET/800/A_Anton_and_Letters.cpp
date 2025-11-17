#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    int fa[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            fa[s[i] - 'a' - 0] = 1;
        }
    }

    int count = 0;

    for (int i = 0; i <= 26; i++)
    {
        if (fa[i] == 1)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
