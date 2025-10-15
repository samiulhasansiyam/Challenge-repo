#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
        }
        int rcount = 0, bcount = 0;

        bool coutr = false;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (a[i][j] == 'R')
                {
                    rcount++;
                }
            }
            if (rcount == 8)
            {
                coutr = true;
                break;
            }
            else
            {
                rcount = 0;
            }
        }
        if (coutr == true)
        {
            cout << "R" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }
    return 0;
}
