#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> s[i];
    }

    int result=0;

    for (int i = 0; i < 4; i++)
    {
        bool count= false;
        for (int j = 0; j < i; j++)
        {
            if (s[i]==s[j])
            {
                count = true;
                break;
            }
        }
        if (!count)
        {
            result++;
        }
    }
    cout << 4 - result << endl;

    return 0;
}
