#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s , t;
        cin >> s >> t;

        string word ="";
        int m = max(s.size(), t.size());

        for (int i=0;i < m;i++)
        {
            if (i < s.size()) word +=s[i];
            if (i < t.size()) word +=t[i];
        }
        cout << word << "\n";
    }
    return 0;
}
