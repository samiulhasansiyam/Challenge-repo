#include <iostream>
using namespace std;

int main()
{
    int a, b;
    string s;
    cin >> a >> b >> s;

    if (s[a] != '-')
    {
        cout << "No" << "\n";
        return 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (i == a)
        {
            continue;
        }
        if (s[i] < '0' || s[i] > '9')
        {
            cout << "No" << "\n";
            return 0;
        }
    }

    cout << "Yes" << "\n";
    return 0;
}
