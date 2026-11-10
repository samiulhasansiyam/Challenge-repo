#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, mCount = 0, cCount = 0;
    cin >> n;
    int mc[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> mc[i][0] >> mc[i][1];
        if (mc[i][0] == mc[i][1])
        {
            continue;
        }
        else if (mc[i][0] > mc[i][1])
        {
            mCount++;
        }
        else
        {
            cCount++;
        }
    }

    if (mCount > cCount)
    {
        cout << "Mishka" << endl;
    }
    else if (mCount == cCount)
    {
        cout << "Friendship is magic!^^";
    }
    else
    {
        cout << "Chris" << endl;
    }

    return 0;
}
