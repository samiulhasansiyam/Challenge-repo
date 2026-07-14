#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        int count = 0, count2 = count;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '#')
            {
                count++;
            }
            else
            {
                count = 0;
            }
            if (count > count2)
            {
                count2 = count;
            }
        }
        cout << ((count2 + 1) / 2) << endl;
    }
    return 0;
}
