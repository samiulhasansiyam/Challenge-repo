#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string word = "Timur";
    sort(word.begin(), word.end());
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n != 5)
        {
            cout << "NO" << endl;
            continue;
        }
        string t = s;
        sort(t.begin(), t.end());
        if (t == word)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
