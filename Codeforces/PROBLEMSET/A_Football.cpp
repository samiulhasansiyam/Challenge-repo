#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    int temp = s[0];
    bool d = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == temp)
        {
            count++;
            if (count == 7)
            {
                d = true;
                break;
            }
        }
        else
        {
            temp = s[i];
            count=1;
        }
    }
    if (d == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
