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
        if (s.size() % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            int middle = s.length() / 2;
            string firstHalf = s.substr(0, middle);
            string secondHalf = s.substr(middle);

            if (firstHalf == secondHalf)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
