#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int countA = 0, countB = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
            {
                countA++;
            }
            else
            {
                countB++;
            }
        }
        if (countA > countB)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }
    return 0;
}
