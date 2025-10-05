#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x1, x2;
        int p1, p2;
        cin >> x1 >> p1;
        cin >> x2 >> p2;
        int len1 = x1.size() + p1;
        int len2 = x2.size() + p2;

        if (len1 > len2)
        {
            cout << ">" << endl;
        }
        else if (len1 < len2)
        {
            cout << "<" << endl;
        }
        else
        {
            while (x1.size() < x2.size())
            {
                x1 += '0';
            }


                while (x2.size() < x1.size())
                {
                    x2 += '0';
                }

                
            if (x1 > x2)
            {
                cout << ">" << endl;
            }
            else if (x1 < x2)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
    }
    return 0;
}
